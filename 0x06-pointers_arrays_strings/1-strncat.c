#include "main.h"

/**
 * _strncat - concatenates two strings
 *@src: string to be copied
 *@dest: string copy to
 *@n: number of bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while(*(dest + j) != '\0')
	{
		j++;
	}

	while (*(src + i) != '\0' && i < n)
	{
			dest[j] = src[i];
			i++;
			j++;
	}
	dest[j] = ('\0');
	return (dest);
}

