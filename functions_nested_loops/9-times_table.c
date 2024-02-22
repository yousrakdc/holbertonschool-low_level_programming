#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: always success
 */

void times_table(void)
{       
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%2d", i * j);
			if (j < 9)
			{
				printf(", ");
			}
		}
		printf("$\n");
	}
}
