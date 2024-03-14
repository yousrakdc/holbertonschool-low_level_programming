#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to the memory block
 * @new_size: new size of the memory block
 * @old_size: old size of the memory block
 * Return: memory block reallocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *c, *new_ptr;
	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}

	if (new_size > old_size)
	{
		c = malloc(new_size);
		if (c == NULL)
		{
			return (NULL);
		}

		new_ptr = ptr;
		for (i = 0; i < old_size; i++)
		{
			((char *)c)[i] = ((char *)new_ptr)[i];
		}
		free(ptr);
		return (c);
	}

	return (ptr);

}
