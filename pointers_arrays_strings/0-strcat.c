#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: string to append
 * @src: string to add
 * Return: always success
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;
	l = 0;

	while (dest[i] != '\0')
		i++;

	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}

	dest[i] = '\0';

	return (dest);

}
