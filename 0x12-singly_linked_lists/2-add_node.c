#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  *add_node - adds a new node at the beginning of a list_t list
  *@head: head
  *@str: string
  *Return: the address of the new element or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = (*head);
	}
	(*head) = new;

	return (new);
}
