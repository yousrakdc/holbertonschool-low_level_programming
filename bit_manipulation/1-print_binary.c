#include <stddef.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * Return: success
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned long int size = sizeof(unsigned long int) * 8;
	int i;

	for (i = 0; i < (int)size; i++)
	{

		if ((n & mask) == 0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}

		mask >>= 1;
	}
	putchar('\n');
}
