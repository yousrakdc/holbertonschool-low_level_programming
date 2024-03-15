#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @new_dog: new dog
 * Return: pointer to the new dog struct, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strcpy - copy a string
 * @src: source string
 * Return: pointer to a new copy of the string, or NULL if it fails
 */
char *_strcpy(char *src);

/**
 * _strlen - calculate the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strcpy(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

char *_strcpy(char *src)
{
	char *dest;
	int i, len;

	if (src == NULL)
		return (NULL);

	len = _strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
