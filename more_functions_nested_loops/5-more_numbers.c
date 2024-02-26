#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * @i: number
 * Return: always success
 */

void more_numbers(void)

{

	int i = 0;

	while (i <= 14) 
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
