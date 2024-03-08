#include "main.h"
#include <stdio.h>

/**
 * set_string - value of a pointer to a char
 * @s: string
 * @to: another string
 * Return: always success
 */

void set_string(char **s, char *to)

{
	*s = to;
}
