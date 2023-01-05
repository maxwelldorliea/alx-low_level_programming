#include "search_algos.h"
#include <math.h>
#include <stddef.h>


/**
 * getNode - return the last node in a singly linkedlist
 * @list: list to be search
 * Return: the last node
 */

skiplist_t *getNode(skiplist_t *list)
{

	while (list->next)
		list = list->next;
	return (list);
}

/**
 * linear_skip - search for a target node in a singly linkedlist
 * @list: list to be searched
 * @value: target to search for
 * Return: node of the first occurrance of the target or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr;

	if (!list)
		return (NULL);

	curr = list;

	while (curr)
	{
		skiplist_t *expo = curr->express;

		if (expo)
			printf("Value checked at index [%ld] = [%d]\n", expo->index, expo->n);
		if (curr->n < value && expo && expo->n < value)
			curr = expo;
		else
			break;
	}
	if (!curr->express)
		curr->express = getNode(curr);
	printf("Value found between indexes [%ld] and [%ld]\n",
			curr->index, curr->express->index);
	while (curr)
	{
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}

	return (NULL);
}
