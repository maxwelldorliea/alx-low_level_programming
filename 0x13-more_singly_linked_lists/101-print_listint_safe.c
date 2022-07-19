#include "lists.h"

/**
 * print_listint_safe - prints all nodes of a linkedlist
 * @head: head of the list
 * Return: number of node printed
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	long int diff;

	while (head != NULL)
	{
		diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		len++;

		if (diff > 0)
			head = head->next;
		else
		{
			listint_t *tmp = head->next;

			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			return (len);
		}
	}

	return (len);
}
