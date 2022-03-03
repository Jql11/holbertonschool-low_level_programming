#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - returns the length of a string
 *@s: character
 *
 *Return: Always 0 (Success)
 */
unsigned int _strlen(char *s)
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
 * string_nconcat - concatenate two string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes of s2
 * Return: pointer s1 + n bytes of s2 + null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int length;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n <= _strlen(s2))
	{
		length = _strlen(s1) + n + 1;
	}
	else
		length = _strlen(s1) + _strlen(s2) + 1;
	p = malloc(length * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	if (n <= _strlen(s2))
	{
		for (j = 0; j < n; j++, i++)
		{
			p[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < _strlen(s2); j++, i++)
			p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
