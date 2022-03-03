#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements to be stored
 * @size: the size of the memory to print
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, nb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	nb = nmemb * size;
	p = malloc(nb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nb; i++)
	{
		p[i] = 0;
	}
	return (p);
}

