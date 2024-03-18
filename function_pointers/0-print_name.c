#include "function_pointers.h"
#include <stdio.h>
#include <ctype.h>

void print_name_uppercase(char *c)
{
	putchar(toupper(*c));
}

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

int main()
{
	print_name("Hodor", &print_name_uppercase);
	return(0);
}
