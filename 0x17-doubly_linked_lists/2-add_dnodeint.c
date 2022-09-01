#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of a linkedlist
 * @head: head of the linkedlist
 * @n: node to be add
 * Return: the head of the modified linkedlist
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *node;

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
		return (*head);
	}
	node->next = *head;
	(*head)->prev = node;
	*head = node;

	return (*head);
}
