#include <unistd.h>

/**
 * my _putchar
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
