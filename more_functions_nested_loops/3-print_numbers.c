#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9
 * @n: number
 * Result: always success
 */

void print_numbers(void)

{
	char n = '0';

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
_putchar ('\n');
}
