#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: number of elements
 */

void print_array(int *a, int n)

{
	int array[5];
	int i, j;

	for (i = 0; i < 5; i++)
	{
		n [i] = i + 100;
	}

	for (j = 0; j < 5; j++)
	{
	 printf("Elements[%d] = %d\n", j, n[j] );
	}

}

