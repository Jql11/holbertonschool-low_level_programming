#include "main.h"
#define NULL 0
#include <stdio.h>

/**
 * myStrlen - lengthof a string
 * @s: string
 * Return: length
 */
int myStrlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: initial string
 * @needle: substring containing the charcters in haystack
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int lenN = myStrlen(needle);
	int lenH = myStrlen(haystack);

	for ( i = 0; i < lenH != '\0'; i++)
	{
		for (j = 0; j < lenN; j++)
		{
			if (haystack[i] ==  needle[j])
				if (j == lenN - 1)
				{
					haystack = &haystack[i - lenN + 1];
					return (haystack);
				}
		}
	}
	return (NULL);

}

