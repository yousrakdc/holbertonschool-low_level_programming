#include <stdio.h>

/**
 * main - Write all single digit numbers of base 10 starting from 0
 * Return: Always (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
