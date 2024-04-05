#include "main.h"

#define M97 "Usage: cp file_from file_to"
#define ERR98 "Error: Can't read from file\n"
#define ERR99 "Error: Can't write to\n"
#define ERR100 "Error: Can't close fd\n"

/**
 * main - copies the content of a file in another file
 * @ac: number of arguments
 * @av: arguments
 * Return: id success, 0, else exits
 */
int main(int ac, char *av[])
{
	int fl1, fl2, len, cl1, cl2;
	char buf[1024];
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, M97), exit(97);
	if (!av[1])
		dprintf(STDERR_FILENO, ERR98), exit(98);
	if (!av[2])
		dprintf(STDERR_FILENO, ERR99), exit(99);
	fl1 = open(av[1], O_RDONLY);
	if (fl1 == -1)
		dprintf(STDERR_FILENO, ERR98), exit(98);

	fl2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (fl2 == -1)
		dprintf(STDERR_FILENO, ERR99), exit(99);
	while ((len = read(fl1, buf, sizeof(buf))) > 0)
	{
		if (write(fl2, buf, len) != len)
			dprintf(STDERR_FILENO, ERR99), exit(99);
	}
	if (len == -1)
		dprintf(STDERR_FILENO, ERR98), exit(98);

	cl1 = close(fl1);
	cl2 = close(fl2);
	if (cl1 == -1 || cl2 == -1)
	{
		dprintf(STDERR_FILENO, ERR100);
		return (100);
	}
	return (0);

}
