#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a value
 * @b: another value
 * Return: always success
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
