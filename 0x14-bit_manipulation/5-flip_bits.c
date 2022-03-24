#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *@n: integer
 *@m: another integer
 * Return: as said above
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff, count = 0;

	diff = n ^ m;
	while (diff > 0)
	{
		count = count + (diff & 1);
		diff = diff >> 1;
	}

	return (count);
}
