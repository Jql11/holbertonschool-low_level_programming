#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - returns the length of a string
 *@s: character
 *
 *Return: Always 0 (Success)
 */
int _strlen(char *s)
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
 *str_concat - concatenate two string
 *@s1: string 1
 *@s2: string 2
 * Return: return string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int j = 0;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(p + i) = *(s1 + i);
	j = 0;
	while (j <= len2)
	{
		*(p + i) = *(s2 + j);
		i++, j++;
	}

	return (p);
}
