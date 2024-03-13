#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and starts it with a specific char
 * @a: array
 * @size: size
 * Return: NULL if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)

{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
