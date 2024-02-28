#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * Return: always success
 */

int _atoi(char *s)

{

	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
		i++;

	if (s[i] == '-' || s[i] == '+') {
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9') {
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return sign * result;
}

