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
	char *comma = "";

	if (!ht)
		return;
	printf("{");
	for (i = 1; i < (ht->size); i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("%s'%s': '%s'", comma, ht->array[i]->key, ht->array[i]->value);
			comma = ", ";
		}
	}
	printf("}\n");
}
