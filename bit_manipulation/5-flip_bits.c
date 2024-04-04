#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  number of bits you would need to flip
 * to get from one number to another
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip = n ^ m;

	while (flip)
	{
		count++;
		flip &= (flip - 1);
	}

	return (count);
}
