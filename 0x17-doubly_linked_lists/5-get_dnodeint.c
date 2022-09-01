#include "lists.h"

/**
 * get_dnodeint_at_index - get node at specify index
 * @head: head of the linkedlist
 * @index: index to search for
 * Return: node at specify index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (!head) 
		return (NULL);

	while (head)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}

	return (NULL);
}
