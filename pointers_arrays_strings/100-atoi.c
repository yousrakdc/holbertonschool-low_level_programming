#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * Return: always success
 */

int _atoi(char *s)

{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-') 
	{
		sign = -1;
		i++;
	}

	if (s[0] == '+') 
	{
		i++;
	}

	while (s[i] != '\0') 
	{
		if (s[i] >= '0' && s[i] <= '9') 
		{
			result = result * 10 + (s[i] - '0');
		}
		else 
		{
			break;
		}
		i++;
	}

	result = result * sign;

	return result;
}
