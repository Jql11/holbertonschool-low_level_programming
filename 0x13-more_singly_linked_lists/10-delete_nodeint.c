#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 *@head: head
 *@index: index startes at 0. index of the node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp->next == NULL) 
		return (-1);

	tmp2 = tmp->next;
	tmp->next = tmp->next->next;
	free(tmp2);
	return (1);
}
