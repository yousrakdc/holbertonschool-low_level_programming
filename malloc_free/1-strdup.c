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
	char *dupe;

	if (str == NULL)
	{
		return (NULL);
	}

	dupe = (char *)malloc(strlen(str) + 1);

	if (dupe == NULL)
	{
		return (NULL);
	}

	strcpy(dupe, str);

	return (dupe);
}
