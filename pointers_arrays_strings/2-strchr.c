#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character we want
 * Return: first occurrence of the character c in the string s or NULL
 */

char *_strchr(char *s, char c)


{
		while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
