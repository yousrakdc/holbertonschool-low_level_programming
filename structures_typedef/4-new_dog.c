#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - copy the name of the owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	int d, e, i;
	dog_t *doggy;

	d = e = 0;
	while (name[d++])
		;
	while (owner[e++])
		;
	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * d + 1);

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < d; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';

	doggy->owner = malloc(sizeof(char) * e + 1);

	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(owner);
		return (NULL);
	}
	for (i = 0; i < e; i++)
	{
		doggy->owner[i] = owner[i];
	}
	doggy->owner[i] = '\0';
	doggy->age = age;

	return (doggy);
}
