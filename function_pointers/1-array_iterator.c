#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @size: size of the array
 * @action: pointer to the function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = O; i < size; i++);
	{
		action(array[i]);
	}
}
