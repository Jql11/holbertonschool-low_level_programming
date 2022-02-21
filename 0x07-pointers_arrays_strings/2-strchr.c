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
	while (*s)
	{
		if (*s != '\0' && *s != c)
			s++;
		else
			return (s);
	}
	return (NULL);
}
