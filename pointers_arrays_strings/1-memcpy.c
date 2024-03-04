#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: another memory area
 * @n: integer
 * Return: memory filled
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
