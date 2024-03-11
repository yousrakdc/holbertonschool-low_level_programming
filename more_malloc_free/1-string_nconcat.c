#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * Return: returned pointer where there's s1, followed by the first n bytes of s2 and NULL
 * if n >= lenght of s2, use entire string s2
 * if NULL is passed, treat as empty string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	size_t concat_len = len_s1 + (n >= len_s2 ? len_s2 : n);

	char *result = malloc(concat_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);

	strncat(result, s2, n >= len_s2 ? sen_s2 : n);

	result[concat_len] = '\0';

	return (result);
}
