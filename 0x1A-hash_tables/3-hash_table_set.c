#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to the end of a linkedlist
 * @h: head of the linkedlist
 * @map: Node to be added
 * Return: 1 Always
 */


int add_node(hash_node_t **h, hash_node_t *map)
{
	hash_node_t *tmp;

	tmp = *h;

	while (tmp->next)
	{
		if (strcmp(tmp->value, map->value) == 0)
		{
			tmp->value = map->value;
			return (1);
		}
		tmp = tmp->next;
	}

	if (strcmp(tmp->value, map->value) == 0)
	{
		tmp->value = map->value;
		return (1);
	}

	tmp->next = map;

	return (1);
}



/**
 * hash_table_set - add a new map to the hash_tables
 * @ht: hash table where map is to be add
 * @key: key of the map
 * @value: value of the map
 * Return: 1 on Success, 0 on Failure
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *map, *h;

	if (!ht)
		return (0);

	if (!key || value == NULL)
		return (0);

	map = malloc(sizeof(*map));

	if (!map)
	{
		free(map);
		map = NULL;
		return (0);
	}

	map->key = strdup(key);
	map->value = strdup(value);
	map->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	h = ht->array[idx];

	if (!h)
	{
		h = map;
		return (1);
	}

	return (add_node(&h, map));
}
