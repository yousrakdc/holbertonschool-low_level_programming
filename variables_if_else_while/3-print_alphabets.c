#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'A'; /* Resetting letter to start from 'A' for uppercase letters*/
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
