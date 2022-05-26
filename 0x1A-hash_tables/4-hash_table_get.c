#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get -retrieve a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value, ot NULL if key couldn't find
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *item;

	if (!ht || !ht->array || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item == NULL)
		return (NULL);
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
