#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @c: characters
 * @size: the size of the memory to print
 *
 * Return: return NULL if size = 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	int i = 0;

	a = malloc(sizeof(c) * size);
	if (size <= 0)
		return (NULL);
	for (i = 0; (unsigned int)i < size; i++)
	{
		if (a == NULL)
			return (NULL);
		*(a + i) = c;
	}
	*(a + i) = '\0';
	return (a);
}
