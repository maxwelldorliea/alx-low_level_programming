#include "lists.h"
#include <stdlib.h>


/**
 * delete_dnodeint_at_index - delete node at the specify index
 * @head: head of the linkedlist
 * @index: index to be deleted
 * Return: 1 on Success, -1 on failure
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *curr, *next;

	if (!head || !(*head))
		return (-1);

	if (index == idx)
	{
		next = (*head)->next;

		if (next)
			next->prev = (*head)->prev;

		free(*head);
		*head = next;
		return (1);
	}
	curr = *head;
	while (curr->next)
	{

		if (idx == index)
		{
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			free(curr);

			return (1);
		}

		curr = curr->next;
		idx++;
	}
	if (idx == index)
	{
		curr->prev->next = NULL;
		free(curr);
		return (1);
	}
	return (-1);
}
