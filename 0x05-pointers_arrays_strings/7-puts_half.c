#include "main.h"

/**
 * puts_half - prints half of a string
 *@str: string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length;
	int i;

	length = _strlen(str);
	if (length % 2 != 0)
	{
		for (i = (length / 2) + 1; i < length && str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length / 2); i < length && str[i] != '\0'; i++)
			_putchar(str[i]);
	}
		_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
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


