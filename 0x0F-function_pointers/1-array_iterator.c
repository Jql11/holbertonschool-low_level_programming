#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - array
 * @array: array
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
