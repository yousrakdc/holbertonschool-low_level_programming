#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - contain all the values from min to max
 * ordered from min to max
 * @min: minimum values
 * @max: maximum values
 * Return: If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)

{
	int *arr;
	int i, num_elements;

	if (min > max)
	{
		return (NULL);
	}

	num_elements = max - min + 1;

	arr = (int *)malloc(num_elements * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
