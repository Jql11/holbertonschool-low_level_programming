#include <stdio.h>
#include "lists.h"

/**
  *print_list - using linked list to prints all the elements
  *@h: linked list
  *Return: number of nodes in linked list
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n",h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}

