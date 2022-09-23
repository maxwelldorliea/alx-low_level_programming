#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>


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
	hash_node_t *map, *h, *tmp;

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

	map->key = (char *)key;
	map->value = strdup(value);
	map->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	h = ht->array[idx];

	if (!h)
	{
		h = map;
		return (1);
	}

	tmp = h;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = map;

	return (1);
}
