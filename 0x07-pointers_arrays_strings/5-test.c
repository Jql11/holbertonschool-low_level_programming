#include "main.h"
#define NULL 0
#include <stdio.h>

/**
 * myStrlen - lengthof a string
 * @s: string
 * Return: length
 
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
*/
int myMatch(char *string, char *substring)
{
	while (*substring != '\0')
	{
		if (*string == *substring)
		{
			string++;
			substring++;
		}
		else
			return (0);
	}
	return (1);
}
/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: initial string
 * @needle: substring containing the charcters in haystack
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	if (*needle == '\0')
		return (haystack);

	while (haystack[0] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (myMatch(&haystack[i], needle) == 1)
			{
				return (&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
