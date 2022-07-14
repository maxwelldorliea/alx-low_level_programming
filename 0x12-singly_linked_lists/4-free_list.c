#include "lists.h"

/**
 * free_list - frees all node from memory
 * @head: list_t pointer
 * Return: Nothing
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		list_t *tmp = head->next;

		free(head->str);
		free(head);
		head = tmp;

	}

	free(head->str);
	free(head);
	head = NULL;

}
