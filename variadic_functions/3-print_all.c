#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 * Return: success
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", i == 0 ? "" : ", ", va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", i == 0 ? "" : ", ", va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", i == 0 ? "" : ", ", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", i == 0 ? "" : ", ", str);
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
		printf("\n");
		va_end(args);
	}
}
