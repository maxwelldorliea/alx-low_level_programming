#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free all nodes from memory
 * @head: head of the linkedlist
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head)
	{
		dlistint_t *tmp = head->next;

		free(head);
		head = tmp;
	}
}
