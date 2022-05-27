#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	char *comma = "";

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < (ht->size); i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", comma, tmp->key, tmp->value);
			comma = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
