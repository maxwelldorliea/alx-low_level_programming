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
	char *n = "(nil)";

	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age < 0)
	{
		printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, n, d->owner);
		return;
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

