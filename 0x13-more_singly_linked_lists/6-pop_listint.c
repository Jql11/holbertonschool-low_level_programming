#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *@head: head
 * Return: the head node's data(n)
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	data = tmp->n;

	*head = (*head)->next;
	free(tmp);

	return (data);
}
