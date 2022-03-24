#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *@n: integer
 *@index: index start from 0
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index <= 32)
	{
		mask = ~(1 << index);
		*n = *n & mask;
		return (1);
	}
	else
		return (-1);
}
