#include "main.h"
#include <errno.h>
#include <sys/stat.h>
#define M97 "Usage: cp file_from file_to"
#define ERR98 "Error: Can't read from file %s\n"
#define ERR99 "Error: Can't write to %s\n"
#define ERR100 "Error: Can't close fd %d\n"

/**
 * main - copies the content of a file in another file
 * @ac: number of arguments
 * @av: arguments
 * Return: if success, 0, else exits
 */
int main(int ac, char *av[])
{
	int file_from, file_to, len;
	char buf[1024];
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | O_EXCL;

	if (ac != 3)
		dprintf(STDERR_FILENO, M97), exit(97);
	if (!av[1])
		dprintf(STDERR_FILENO, ERR98, av[1]), exit(98);
	if (!av[2])
		dprintf(STDERR_FILENO, ERR99, av[2]), exit(99);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, ERR98, av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_EXCL, perm);
	if (file_to == -1)
	{
		if (errno == EEXIST)
			file_to = open(av[2], O_WRONLY);
		if (file_to == -1)
			dprintf(STDERR_FILENO, ERR99, av[2]), exit(99);
		else
			fchmod(file_to, perm);
	}
	while ((len = read(file_from, buf, 1024)) > 0)
	{
		if (file_from == -1 || (write(file_to, buf, len) != len))
			dprintf(STDERR_FILENO, ERR99, av[2]), exit(99);
	}
	if (len == -1)
		dprintf(STDERR_FILENO, ERR98, av[1]), exit(98);
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, ERR100, close(file_from) == -1 ? file_from : file_to);
		return (100);
	}
	return (0);
}
