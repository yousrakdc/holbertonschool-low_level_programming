#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: size
 * Result: always success
 */

void print_square(int size)

{
	int i, n;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < size ; i++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
