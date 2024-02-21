#include "main.h"

/**
 * print_sign : prints the sign of a number.
 * return: if 1, print + is greater than 0, if 0 print 0, if -1 print -
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
	_putchar(45);
		return(-1);
	}
	else  (n = 1);
	{
		_putchar(48);
		return(0);
	}
}
