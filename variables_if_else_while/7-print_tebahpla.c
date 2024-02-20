#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in reversed in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'z';
while (letter <= 'a')
{
putchar(letter);
letter--;
}
	putchar('\n');

	return (0);
}

