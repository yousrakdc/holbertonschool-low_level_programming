#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * Return: success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int s;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, int);
		printf("%d", s);
		
		if (s != NULL)
			printf("nil");

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
