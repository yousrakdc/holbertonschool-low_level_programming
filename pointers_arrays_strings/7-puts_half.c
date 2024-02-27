#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: always success
 */

void puts_half(char *str)

{
	int length, i, n;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (length % 2)
	{
		for (n = (length - 1) / 2; n < length - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}

_putchar('\n');
}
