#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);
	if (!oprt)
		printf("Error\n"), exit(99);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%i\n", oprt(a, b));
	return (0);
}
