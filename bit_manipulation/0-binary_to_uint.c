#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (b = b; *b; b++)
	{
		if (*b == '1')
			result = (result << 1) +1;
		
		else if (*b == '0')
			result = result << 1;
		else
			return (0);
	}
	return (result);
}
