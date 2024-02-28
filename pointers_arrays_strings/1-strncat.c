#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenates two strings
 * @dest: string to append
 * @src: string to add
 * @n: number
 * Return: always success
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, l;

	i = 0;
	l = 0;
	
		while (dest[i] != '\0')
		i++;

	while (src[l] != '\0' && l < n)
	{
		dest[i] = src[l];
		i++;
		l++;
	}

	dest[i] = '\0';

	return (dest);

}
