#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - return length of a string
 * @s: char
 * Return: pointer that duplicates the string or NULL
 */

int _strlen(char*s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer that duplicates the string or NULL
 */

char *_strdup(char *str)

{
	char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
	}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
}
