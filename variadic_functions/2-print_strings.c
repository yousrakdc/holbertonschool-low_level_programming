#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of strings
 * @separator: string to be printed
 * Return: success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (!s)
			printf("nil");

		else
			printf("%s", s);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
