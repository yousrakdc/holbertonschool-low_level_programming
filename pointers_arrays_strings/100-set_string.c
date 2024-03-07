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
	char *s = NULL;
	char str[] = "Bob Dylan";

	set_string(&s, str);

	printf("s: %s\n", s);

	return (0);
}
