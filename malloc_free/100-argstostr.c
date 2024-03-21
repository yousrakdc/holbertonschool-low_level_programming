#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @av: double pointer
 * @ac: arg count
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (0);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, total++)
			;
		total++;
	}
	total++;

	s = malloc(total * sizeof(char));

	if (s == NULL)
		return (0);

	t = s;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*s = av[x][y];
			s++;
		}
		*s = '\n';
		s++;
	}
	return (t);
}
/**
 * _strlen - return length of a string
 * @s: char type
 * Return:  length of string
 **/
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
