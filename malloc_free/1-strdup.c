#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer that duplicates the string or NULL
 */

char *_strdup(char *str)

{
	char *a;
	unsigned int i = 0;
	unsigned int k = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	a = malloc(sizeof(char) * i + 1);

	if (a == NULL)
		return (NULL);

	while (str[k])
	{
		a[k] = str[k];
		k++;
	}
	return (a);
}
