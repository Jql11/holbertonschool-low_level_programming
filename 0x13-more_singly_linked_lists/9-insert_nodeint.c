#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_t *insert_nodeint_at_index - inserts a new node at a given position
 *@head: head
 *@idx: is the index of the list where the new node should be added.
 *@n: data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (i < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
			return (NULL);
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
