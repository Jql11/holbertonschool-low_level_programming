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
 * _strdup - a copy of the string
 *@str: string
 * Return: returns a pointer tothe duplicated string
 */
char *_strdup(char *str)
{
	char *p;
	int length = _strlen(str);
	int i;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (length + 1); i++)
	{
		p[i] = str[i];
	}
	return (p);
}

