#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
* jump_search - searches for a value in a sorted array
* @array: pointer to the first element of the array
* @size: is the number of elements in array
* @value: value to search for
* Return: the first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t low = 0;
	size_t jump = sqrt(size);

	if (!array || array[0] > value)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i + jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);

	for (low = i - jump; low <= i && low < size; low++)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}
	return (-1);
}
