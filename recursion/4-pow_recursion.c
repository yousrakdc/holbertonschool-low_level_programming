#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @y: value
 * @x: another value
 * Return: if y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)

{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return x * _pow_recursion(x, y -1);
}
