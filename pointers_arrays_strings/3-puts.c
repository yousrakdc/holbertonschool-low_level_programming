#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string
 * Return: always success
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
