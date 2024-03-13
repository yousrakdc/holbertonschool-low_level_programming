#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - copy the name of the owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Null if it fails
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

	doggy->name = malloc(d * sizeof(doggy->name));

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < d; i++)
		doggy->name[i] = name[i];

	doggy->owner = malloc(e * sizeof(doggy->owner));

	if (doggy == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < e; i++)
	doggy->owner[i] = owner[i];

	doggy->age = age;

	return (doggy);
}
