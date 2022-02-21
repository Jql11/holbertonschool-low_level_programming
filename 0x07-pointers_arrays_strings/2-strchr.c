#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: first occurrence of the character
 * Return: a pointer s.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	return (NULL);
}
