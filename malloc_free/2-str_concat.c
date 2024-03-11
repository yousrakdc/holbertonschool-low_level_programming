#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @c: concatenate strings
 * Return: newly allocated space in memory which contains the contents of s1
 * followed by the contents of s2
 * and null terminated
 * if NULL is passed, treat it as an empty string
 */

char *str_concat(char *s1, char *s2)

{	
	size_t len_s1, len_s2, len_concatenated;
	char *c

	if (s1 == NULL) s1= "";
	if (s2 == NULL) s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	len_concatenated = len_s1 + len_s2 + 1;

	char *c = (char *)malloc(len_concatenated);

	if (c == NULL)
	{
		return (NULL);
	}

	strcpy(c, s1);
	strcpy(c, s2Ã);

	return (c);
}
