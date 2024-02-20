#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always (Success)
 */
int main(void)

{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number + 10% ) '0');

		if (number == 9)
			continue;
	}
	putchar(',');
	putchar('\n');

	return (0);
}
