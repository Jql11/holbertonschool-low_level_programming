#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item != NULL)
		{
			free(item->key);
			free(item->value);
			free(item);
		}
	}
	free(ht->array);
	free(ht);
}
