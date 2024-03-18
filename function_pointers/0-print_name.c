#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))

{
	while (name != '\0')
	{
		putchar(*name);
		name++;
	}
	putchar('\n');

typedef void (*NamePrinter)(char *);

/*
 * main - main function
 * @printer: prints the name
 */

int main()
{
	NamePrinter printer;

	printer = &printName;
	(*printer)("Bob");
	return(0);
}
