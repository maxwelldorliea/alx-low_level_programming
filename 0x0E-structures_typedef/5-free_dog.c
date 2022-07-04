#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog from the heap
 * @d: dog_t pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
