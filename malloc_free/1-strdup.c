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
	char *dupe;
	size_t size;
	
	if (str == NULL)
	{
		return NULL;
	}
	size = strlen(str) + 1;
	dupe = malloc(size * sizeof(char));
	
	if (dupe == NULL)
	{
		return NULL;
	}

	strcpy(dupe, str);
	return dupe;
}
