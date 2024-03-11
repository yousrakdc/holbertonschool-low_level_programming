#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: newly allocated space in memory which contains the contents of s1
 * followed by the contents of s2
 * and null terminated
 * if NULL is passed, treat it as an empty string
 */

char *str_concat(char *s1, char *s2)

{
	char *c;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	c = malloc((i + j + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		c[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		c[k + l] = s2[l];
	}
	c[k + l] = '\0';
	return (c);
}
