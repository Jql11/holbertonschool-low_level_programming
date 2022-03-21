#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - fress a list
 *@head: head
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *nnode, *cnode;

	cnode = *head;

	while (cnode != NULL)
	{
		nnode = cnode->next;
		free(cnode);
		cnode = nnode;
	}
	*head = NULL;
}
