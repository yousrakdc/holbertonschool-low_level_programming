#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: dog
 * Return: If an element of d is NULL, print (nil)
 * instead of this element. (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */

void print_dog(struct dog *d)

{

	if (d == NULL)
	{
		return;

	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
