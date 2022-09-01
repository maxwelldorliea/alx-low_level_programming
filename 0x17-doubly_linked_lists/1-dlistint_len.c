#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - return the len of a doubly linkedlist
 * @h: head of the linkedlist
 * Return: len of the linkedlist
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
