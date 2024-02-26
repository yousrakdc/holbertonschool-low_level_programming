#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: a number
 * Result: always success
 */

void print_diagonal(int n)

{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1 ; i < n ; i++)
	{
		for (n = 0; n < i; n++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
