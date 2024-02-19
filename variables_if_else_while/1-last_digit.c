#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d and is ", n%10);

if (n%10 > 5)
{
printf("greater than 5\n");
} 
else if (n%10 == 0)
{
printf("0\n");
} 
else (n%10 < 6);
{
printf("less than 6 and not 0\n");
}

return (0); 
}
