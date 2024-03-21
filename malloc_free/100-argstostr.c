#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);

/**
 * argstostr - concatenates all the arguments of your program
 * @av: double pointer
 * @ac: arg count
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s, *t;
	int i, y, total;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++, total++)
			;
		total++;
	}
	total++;

	s = malloc(total * sizeof(char));

	if (s == NULL)
		return (0);

	t = s;
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
		{
			*s = av[i][y];
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
