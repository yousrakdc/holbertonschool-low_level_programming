#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - natural square root of a number
 * _sqrt_recursion_helper - locate the sqaure root
 * @n: number
 * @low: low limit of the range
 * @high: high limir of the range
 * Return: If n does not have a natural square root, return -1
 */

int _sqrt_recursion_helper(int n, int low, int high)

{
	int mid, square;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}	else if (square < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, high));
	}
	return (_sqrt_recursion_helper(n, low, mid - 1));
}

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion_helper(n, 0, n));
}
