#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at the nth index of a linkedlist
 * @idx: index where the node should be added
 * @n: value of the node to be added
 * @head: the head of the list
 * Return: pointer to the head of the list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(*node));
	unsigned int i = 0;
	listint_t *tmp;

	if (node == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}

	if (head == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	tmp = *head;

	while (tmp->next != NULL)
	{
		if (i == (idx - 1))
		{
			node->next = tmp->next;
			tmp->next = node;
			return (*head);
		}
		i++;
		tmp = tmp->next;
	}
	if (i == (idx - 1))
	{
		node->next = tmp->next;
		tmp->next = node;
		return (*head);
	}
	return (NULL);
}
