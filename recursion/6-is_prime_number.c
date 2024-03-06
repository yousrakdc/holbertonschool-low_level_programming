#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime number
 * is_prime_number_helper - helper
 * @base_num: base number
 * @n: number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number_helper(int n, int base_num)

{
	if (base_num % n == 0 || base_num < 2)
		return (0);
	else if (n == base_num -1)
			return (1);
	else if (base_num > n)
		return (is_prime_number_helper(n + 1, base_num));
	return (1);
}

/**
 * is_prime_number - prime number
 * @n: number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)

{
	return (is_prime_number_helper(2, n));
}
