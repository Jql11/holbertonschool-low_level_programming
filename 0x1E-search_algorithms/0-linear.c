#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
* linear_search - searches for a value in an array
* array: a pointer to the first element of the array
* size: number of elements
* value: the value to searh for
* Retrun the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	if (value)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if(array[i] == value)
				return (i);
		}
	return (-1);
}
