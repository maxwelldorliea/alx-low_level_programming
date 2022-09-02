#include "lists.h"
#include <stdlib.h>


/**
 * insert_dnodeint_at_index - insert at a specify index in a doubly linkedlist
 * @h: head of the linkedlist
 * @idx: index to be inserted at
 * @n: node to be inserted
 * Return: head of the modified linkedlist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	unsigned int index = 0;

	if (!h || !(*h))
		return (NULL);

	node = malloc(sizeof(*node));

	if (!node)
	{
		free(node);
		node = NULL;
		return (node);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	tmp = *h;

	while (tmp)
	{
		if (idx == index)
		{
			node->next = tmp;
			node->prev = tmp->prev;
			tmp->prev->next = node;
			return (*h);
		}
		tmp = tmp->next;
		index++;
	}

	return add_dnodeint_end(h, n);
}
