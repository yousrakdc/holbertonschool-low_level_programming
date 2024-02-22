#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 * @n: number
 * Return: last printed number should be 98
 */

void print_to_98(int n)

{
	int i

		for (i = n; i <= 98; i++)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');

}

