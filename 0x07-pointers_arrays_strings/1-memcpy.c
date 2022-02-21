#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area copied to
 * @src: memory area to be copied
 * @n: number of byte
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		*(cdest + i) = *(csrc + i);
	return (dest);
}
