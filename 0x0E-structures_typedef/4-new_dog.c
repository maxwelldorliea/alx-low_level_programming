#include "dog.h"
#include <string.h>
#include <stdlib.h>


/**
 * new_dog - creates a new dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 * Return: Pointer to a new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	int n_len, o_len;
	char *nname, *nowner;

	dog_t *ndog = malloc(sizeof(*ndog));

	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	if (name == NULL)
		return (NULL);
	n_len = strlen(name);
	nname = malloc(sizeof(*nname) * n_len + 1);
	if (nname == NULL)
	{
		free(nname);
		free(ndog);
		return (NULL);
	}
	if (owner == NULL)
		return (NULL);
	o_len = strlen(owner);
	nowner = malloc(sizeof(*nowner) * o_len + 1);
	if (nowner == NULL)
	{
		free(nname);
		free(nowner);
		free(ndog);
		return (NULL);
	}
	strcpy(nname, name);
	strcpy(nowner, owner);
	ndog->age = age;
	ndog->name = nname;
	ndog->owner = nowner;

	return (ndog);
}
