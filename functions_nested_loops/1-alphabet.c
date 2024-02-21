#include <stdio.h>
#include "main.h"

/*
 * main - print alphabet in lowercase
 * Return : Always 0
 */

int print_alphabet(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
