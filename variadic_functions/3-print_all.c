#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *sep = "";

	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		printf("\n");
		return;
	}
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					printf("%s%s", sep, str ? str : "(nil)");
					break;
				default:
					fprintf(stderr, "Error: '%c'\n", format[i]);
					va_end(args);
					return;
			}
			sep = ", ";
			i++;
		}
		printf("\n");
		va_end(args);
}
