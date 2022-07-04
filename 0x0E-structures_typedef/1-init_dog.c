#include "dog.h"

/**
 * init_dog - initialize the members of dog
 * @d: struct dog pointer
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 * Return: Nothing
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
