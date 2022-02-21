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
	unsigned int len = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return len;
	while (*s && _strchr(accept, *s++))
			len++;
	return (len); 
}
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
