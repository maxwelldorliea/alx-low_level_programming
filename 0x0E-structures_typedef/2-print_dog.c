#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the detail of struct dog
 * @d: struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	char *n = "nil";

	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "nil";
	if (!d->age)
		d->age = 0.0;
	if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, d->age, n);
		return;
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

