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
	hash_node_t *item;
	hash_node_t *current_item;
	unsigned long int index;
	char *k, *v;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	k = strdup(key);
	if (key == NULL || strlen(key) == 0)
		return (0);
	v = strdup(value);
	if (value == NULL)
		return (0);
	item->key = k;
	item->value = v;

	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL) /* this index is not occupued*/
		ht->array[index] = item;/*insert item to this index*/
	else
	{
		if (strcmp(item->key, key) == 0)
			strcpy(ht->array[index]->value, value);
		else
		{
			item->next = ht->array[0];
			ht->array[0] = item;
		}
	}
	return (1);
}
