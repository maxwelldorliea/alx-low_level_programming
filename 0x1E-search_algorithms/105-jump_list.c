#include "search_algos.h"
#include <math.h>
#include <stddef.h>

/**
 * getNode - return a node in a singly linkedlist give its index
 * @list: list to be search
 * @idx: index of the target
 * Return: the node or NULL
 */

listint_t *getNode(listint_t *list, size_t idx)
{
	while (list)
	{
		if (list->index == idx)
			return (list);
		list = list->next;
	}

	return (NULL);
}

/**
 * jump_list - search for a target node in a singly linkedlist
 * @list: list to be searched
 * @size: size of the list
 * @value: target to search for
 * Return: node of the first occurrance of the target or NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t low, high;

	if (!list)
		return (NULL);

	low = 0;
	high = sqrt(size);

	while (high < size)
	{
		listint_t *node = getNode(list, high);

		printf("Value checked at index [%ld] = [%d]\n", high, node->n);
		if (node->n >= value)
			break;
		low = high;
		high += sqrt(size);

	}

	if (high >= size)
	{
		high = size - 1;
		printf("Value checked at index [%ld] = [%d]\n", high, getNode(list,
					high)->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (; low < size; low++)
	{
		listint_t *node = getNode(list, low);

		printf("Value checked at index [%ld] = [%d]\n", low, node->n);

		if (node && node->n == value)
			return (node);
	}

	return (NULL);
}
