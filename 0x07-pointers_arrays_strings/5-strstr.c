#include "main.h"
#define NULL 0
#include <stdio.h>

/**
 *compare - compare strings
 *@X: string 1
 *@Y: substring
 *Return: value
 */
int compare(const char *X, const char *Y)
{
	while (*Y != '\0')
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
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
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (compare(haystack, needle) == 1)
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

