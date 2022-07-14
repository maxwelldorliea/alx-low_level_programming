#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at the beginning of the list
 * @head: list_t pointer of pointer
 * @str: char pointer
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(*node));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (*head);
}

