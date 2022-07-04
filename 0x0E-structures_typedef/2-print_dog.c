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
	if (d == NULL)
	{
		puts("(nil)");
		return;
	}

	if (d->name == NULL)
		d->name = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

