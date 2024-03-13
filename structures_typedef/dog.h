#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog info
 * @name: type
 * @age: float
 * @owner: char
 * Description: structure to store dog info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
