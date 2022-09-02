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

	if (!h || !(*h))
		return (NULL);

	tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (!tmp || !tmp->next)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(*node));


	if (!node)
	{
		free(node);
		node = NULL;
		return (NULL);
	}

	node->n = n;
	node->prev = tmp;
	node->next = tmp->next;
	tmp->next->prev = node;
	tmp->next = node;

	return (node);
}
