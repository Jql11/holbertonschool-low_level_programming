#include "main.h"
#define NULL 0
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
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
