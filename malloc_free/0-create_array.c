#include <stlib.h>
#include <stdio.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * Return: NULL if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)

{
	if (size == 0)
	{
		return(NULL);
	}

	unsigned int = i

	char *arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		putchar("NULL"\n);
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return(arr);

}

int main()

{
	unsigned int size = 10:
	char c = 'A';

	char *array = create_array(size, c);
	if (array == NULL)
	{
		putchar('N');
		putchar('U');
		putchar('L');
		putchar('L');

		return(EXIT_FAILURE);
	}

	for (i = 0; i < size, i++)
	{
		putchar(array[i]);
	}
	putchar("\n");

	free(array);

	return(0);
}
