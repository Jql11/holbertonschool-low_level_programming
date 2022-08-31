#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
* binary_search - searches for a value in an array
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t l = 0;
	size_t r = size - 1;
	size_t mid = 0;

	if (!value || !array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i != r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
