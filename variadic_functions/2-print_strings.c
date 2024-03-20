#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of strings
 * @separator: string to be printed
 * Return: success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *s;
	unsigned int i;
	va_list args;

	va_start(args, in);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, const char *);

		if (s == NULL)
			printf("nil");

		else
			printf("%s", s);

		if ((const char *)separator != NULL && i != n - 1)
		{
			printf("%s", (const char *)separator);
		}
	}
	va_end(args);

	printf("\n");
}
