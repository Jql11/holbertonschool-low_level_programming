#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - length of element in a list
 *@h: head
 * Return: legnth of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
/**
 * inset_dnodeint_at_index - inset a new node at a given position
 *@h: head
 *@idx: index
 *@n: data
 * Return: Address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	size_t node;

	dlistint_t *new, *tmp;
	node = dlistint_len(*h);

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	new->n = n;
	if (new == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (tmp != NULL && i < idx - 1)
	{ 
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
	if (idx == node)
		return (add_dnodeint_end(h, n));
}
