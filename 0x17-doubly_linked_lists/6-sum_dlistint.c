#include "lists.h"

/**
 * sum_dlistint - return the sum of all nodes
 * @head: head of the linkedlist
 * Return: sum of all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
