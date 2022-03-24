#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *@n: integer
 *@index: index, starting from 0
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit, max_value;

	max_value = sizeof(unsigned long int) * 8;
	if (index > max_value)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
