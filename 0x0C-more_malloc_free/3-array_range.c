#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, length;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	p = malloc(length * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
