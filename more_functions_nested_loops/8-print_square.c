#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @n: a number
 * Result: always success
 */

void print_square(int size)

{
	int i, n;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		for (n = 2; n < i; n++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
