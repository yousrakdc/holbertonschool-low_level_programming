#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - locate the sqaure root
 * @n: number
 * @base_num: base number:wq
 * Return: If n does not have a natural square root, return -1
 */

int _sqrt_recursion_helper(int n, int base_num)

{
	if (n * n == base_num)
		return (n);
	if (n * n > base_num)
		return (-1);
	return (_sqrt_recursion_helper(n + 1, base_num));
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number to check
 * Return: If n does not have a natural square root, return -1
 */

	int _sqrt_recursion(int n)

{
		return (_sqrt_recursion_helper(1, n));
}
