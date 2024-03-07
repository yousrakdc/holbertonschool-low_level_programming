#include <stdio.h>

/**
 * main - number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: print a number followed by a new line
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
