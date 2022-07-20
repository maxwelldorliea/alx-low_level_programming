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
	listint_t *curr, *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	node = malloc(sizeof(*node));

	if (node == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	curr = *head;

	if (idx == 0)
	{
		node->next = curr;
		*head = node;
		return (*head);
	}

	while (i <= idx)
	{
		if (curr == NULL || curr->next == NULL)
			return (NULL);
		curr = curr->next;
		i++;
	}

	if (i > idx)
		return (NULL);

	node->next = curr->next;
	curr->next = node;
	return (node);
}
