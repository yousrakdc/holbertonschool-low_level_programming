#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 * @i: row number
 * @j: column number
 * Return: always success
 */

void times_table(void)

{	int result = i * j;
	if (result >= 9) 
	{
		putchar(result / 10 + '0');
		putchar(result % 10 + '0');
	} else
	{
		putchar(result + '0');
	}

	if (j < 9)
	{
		putchar(',');
		putchar(' ');
		if (result < 10) putchar(' ');
	}

	putchar('$');
	putchar('\n');
}
