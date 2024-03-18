#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))

{
	while (*name != '\0')
	{
		f(name);
		name++;
	}
	putchar('\n');
}
