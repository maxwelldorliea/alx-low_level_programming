#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of the linkedlist
 * @index: index of the node to be deleted
 *
 * Return: 1 if success or -1 if failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int curr_idx = 0;
	listint_t *prev = NULL, *curr;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;

		if (curr_idx == index)
		{
			if (prev != NULL)
			{
				free(curr);
				prev->next = next;
				return (1);
			}

			free(curr);
			*head = next;
			return (1);
		}
		curr_idx++;
		prev = curr;
		curr = next;
	}

	return (-1);
}
