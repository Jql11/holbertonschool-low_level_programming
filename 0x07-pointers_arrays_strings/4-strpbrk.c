#include "main.h"
#define NULL 0
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: initial string
 * @accept: string containing the charcters in s
 * Return: pointer to the byte or null if no such byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
