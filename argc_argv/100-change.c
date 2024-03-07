#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of $
 * @argc: argument count
 * @argv: argument vector
 * Return: not exactly 1, print "error", negative print '0'
 */

int main(int argc, char *argv[])
{
	int cents;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
	int total_coins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		total_coins += cents / coin_values[i];
		cents %= coin_values[i];
	}
	printf("%d\n", total_coins);
	return (0);
}
