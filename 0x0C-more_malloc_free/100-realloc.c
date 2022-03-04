#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * realloc - reallocates a memory block 
 * @ptr: pointer to the meomry previously allocated 
 * @old_size: old size 
 * @new_size: new size
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size >= old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		}
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (p);
}
