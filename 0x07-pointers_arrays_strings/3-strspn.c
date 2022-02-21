#include "main.h"
#define NULL 0
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial string
 * @accept: string containing the charcters in s
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			else if (s[i] != accept[j] && accept[j + 1] == '\0')
				return (len);
		}
	}
	return (len);
}
