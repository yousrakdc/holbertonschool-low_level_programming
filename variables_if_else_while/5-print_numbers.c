#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	if (x < 9)
		printf("/n");
	return (0);
}
