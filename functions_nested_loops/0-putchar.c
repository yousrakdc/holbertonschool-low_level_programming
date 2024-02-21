#include "main.h"
#include <stdio.h>

int main(void)
{
	int i;
	char chainput[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(chainput[i]);
	}

	_putchar('\n');
	return (0);
}
