#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer to extract the bit from
 * @index: position of the bit within 'n'
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	bit = (n & mask) >> index;

	return (bit);
}
