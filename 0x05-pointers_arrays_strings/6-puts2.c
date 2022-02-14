#include "main.h"

/**
 * puts2 - prints every other character of a string
 *@str: string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int length;
	char s[32] = "";

	length = _strlen(str);
	i = 0;
	while (i <= length)
	{
		_putchar(str[i]);
		s[i / 2] = str[i];
		i += 2;
	}
	_putchar('\n');
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
