#include "main.h"


/**
 * rev_string - reverse the string
 *@s: string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, len, temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

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
