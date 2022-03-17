#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;/*Save the head in a tmp variable, and make head point to the next node on your list*/
		head = head->next;
		free(tmp->str);
		free(tmp);/*head just points to the rest of the list, go back to step 1*/
	}

}
