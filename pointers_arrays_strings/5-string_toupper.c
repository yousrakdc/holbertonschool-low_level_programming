#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convert a string to uppercase
 * @p: Pointer to string
 * Return: always success
 */


char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - ('a' - 'A');
		}
	}

	return (p);
}
