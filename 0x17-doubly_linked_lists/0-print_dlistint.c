#include "lists.h"


/**
 * print_dlistint - prints all node in a doubly linkedlist
 * @h : head of the linkedlist
 * Return: number of element in the linkedlist
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
