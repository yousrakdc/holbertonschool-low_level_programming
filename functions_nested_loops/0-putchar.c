#include "main.h"
#include <stdio.h>

/**
 * main - Print putchar
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	char charput[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(charput[i]);
	}

	_putchar('\n');
	return (0);
}
