#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: a number
 * Result: n is 0 or less, the function should only print \n
 */

void print_line(int n)

{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1 ; i <= n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
