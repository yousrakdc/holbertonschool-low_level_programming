#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: always success
 */

int main(int argc, char *argv[])

{
	int i;

	if (argc >= 1)
	{
		for (i = 0; argv[0][i] != '\0'; i++)
	{
		putchar(argv[0][i]);
	}
	putchar('\n');
	}
	return (0);
}

