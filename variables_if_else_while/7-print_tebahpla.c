#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in reversed in lowercase followed
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
{
		putchar(letter);
}
	putchar('\n');
	return (0);
}
