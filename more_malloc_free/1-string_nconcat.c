#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number
 * Return: pointer where there's s1, then the first n bytes of s2 and NULL
 * if n >= lenght of s2, use entire string s2
 * if NULL is passed, treat as empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i, j;
	char *c;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	c = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (cat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		c[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		c[i + j] = s2[j];
	}

	c[i + j] = '\0';

	return (c);
}
