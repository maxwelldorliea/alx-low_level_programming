#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: list_t pointer of pointer
 * @str: char pointer
 * Return: list_t pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(*node));
	list_t *tmp;

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		return (*head);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	node->next = tmp->next;
	tmp->next = node;


	return (tmp);
}
