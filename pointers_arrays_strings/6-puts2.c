#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: always success
 */

void puts2(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

_putchar('\n');
}
