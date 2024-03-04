#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: bytes to return from
 * @accept: bytes to include
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)

{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}

		}
		else
			return (c);
	}
	return (c);
}
