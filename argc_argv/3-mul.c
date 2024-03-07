#include <stdio.h>
#include <stdlib.h>

/**
 * main - number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: print a number followed by a new line
 */

int main(int argc, char *argv[])

{
	int n, d, r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	d = atoi(argv[2]);
	r = n * d;

	printf("%i\n", r);

	return (0);
}
