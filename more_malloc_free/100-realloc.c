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
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);
	return (new_ptr);

}
