#include "main.h"

/**
 * print_sign -  prints the sign of a number.
 * @n: number to be verified
 * Return: print_sign 1 for positive n, -1 for negative, 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
		(n = 1);
	{
		_putchar(48);
		return (0);
	}
}
