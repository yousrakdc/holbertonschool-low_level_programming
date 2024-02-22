#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 * @i: row number
 * @j: column number
 * @z: result
 * Return: always success
 */

void times_table(void)

{
	char i = row; j = column; z = result;

	int z = i * j;
	if (z >= 9) 
	{
		putchar(z / 10 + '0');
		putchar(z % 10 + '0');
	} else
	{
		putchar(z + '0');
	}

	if (j < 9)
	{
		putchar(',');
		putchar(' ');
		if (z < 10) putchar(' ');
	}

	putchar('$');
	putchar('\n');
}
