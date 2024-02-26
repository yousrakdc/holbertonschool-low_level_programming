#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: always success
 */

void print_triangle(int size)

{
	int i, n, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= size; i++)
	{
		for (n = size - i; n > 0; n--)
		{
			_putchar(' ');
		}
		for (j = 1; j < +i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}


