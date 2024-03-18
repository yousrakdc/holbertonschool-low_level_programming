#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function given as parameter
 * on each element of an array
 * @size: size of the array
 * @array: array
 * @action: pointer to the function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
