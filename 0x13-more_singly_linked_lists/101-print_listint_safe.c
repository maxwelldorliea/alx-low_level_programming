#include "lists.h"

/**
 * print_listint_safe - prints all nodes of a linkedlist
 * @head: head of the list
 * Return: number of node printed
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;

	while (head != NULL)
	{
		len++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head > head->next)
			head = head->next;
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (len);
		}
	}

	return (len);
}
