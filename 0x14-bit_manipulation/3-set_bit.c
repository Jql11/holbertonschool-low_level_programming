#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *@n: integer
 *@index: indext starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index <= 32)
	{
		mask = 1 << index;
		*n = mask | *n;
		return (1);
	}
	else
		return (-1);
}
