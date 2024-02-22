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
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;

			if (z >= 10) 
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

		}
	}

	putchar(( i <= 9); '$');
	putchar(( j <= 9); '$');
}
