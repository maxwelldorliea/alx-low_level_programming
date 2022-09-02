#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end of a linkedlist
 * @head: head of the linkedlist
 * @n: node to be add
 * Return: the head of the modified linkedlist
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *node, *tmp;

	if (!head)
		return (NULL);
	node = malloc(sizeof(*node));

	if (!node)
	{
		free(node);
		node = NULL;
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (!(*head))
	{
		*head = node;
		return (node);
	}

	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;
	node->prev = tmp;

	return (node);
}
