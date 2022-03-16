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
  *add_node - adds a new node at the end of a list_t list
  *@head: head
  *@str: string
  *Return: the address of the new element or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	
	temp = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
