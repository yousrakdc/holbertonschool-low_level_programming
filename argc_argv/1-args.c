#include <stdio.h>

/**
 * main - number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: print a number followed by a new line
 */

int main(int argc __attribute__((unused)), char *argv[])

{

	int n = 0;

	while (argv[n] != NULL)
	{
		n++;
	}

	while (n > 0)
	{
		int digit = n % 10;

		putchar(digit + '0');

		n /= 10;
	}
	putchar ('\n');

	return (0);
}
