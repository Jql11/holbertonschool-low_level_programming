#include "main.h"

/**
 * print_rev - prints a string in reverse
 *@s: string
 * Return: Always 0.
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

void print_rev(char *s)
{
	int length;
	int i;

	length = _strlen(s) - 1;
	for (i = length; length >= 0; length--)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
