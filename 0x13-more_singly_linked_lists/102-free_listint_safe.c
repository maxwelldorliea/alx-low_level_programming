#include "lists.h"

/**
 * free_listint_safe - prints all nodes of a linkedlist
 * @h: head of the list
 * Return: number of node printed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (*h != NULL)
	{
		listint_t *tmp;

		len++;
		if (*h > (*h)->next)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}

		else
		{
			free(*h);
			*h = NULL;
		}

	}

	*h = NULL;

	return (len);
}
