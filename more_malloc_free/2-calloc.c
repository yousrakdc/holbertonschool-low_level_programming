#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;
	unsigned int num;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	ptr = malloc(nmemb * size);
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	num = 0;

	while (num < nmemb *size)
	{
		ptr[num] = 0;
		num++;
	}
	return (ptr);
}
