#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 * Return: chessboard
 */

void print_chessboard(char (*a)[8])

{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		putchar(' ');
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
