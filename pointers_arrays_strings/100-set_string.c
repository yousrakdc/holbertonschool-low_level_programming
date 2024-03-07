#include "main.h"
#include <stdio.h>

/** set_string - value of a pointer to a char
 * Return: always success
 */

void set_string(char **s, char *to)

{
	*s = to;
}

int main()

{
	int i;

	char *s = NULL;
	char str[] = "Bob Dylan";

	set_string(&s, str);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
