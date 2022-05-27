#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key cannot be empty string
 * @value: value must be duplicated, and it can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *current_item = NULL;
	unsigned long int index;
	
	if (!ht || key == NULL)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	item->next = current_item;
	ht->array[index] = item;/*insert item to this index*/
	return (1);
}
