#include "main.h"

/**
 * _strlen - returns the length of a string
 *print_rev - prints a string in reverse
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

/**
  *print_rev - prints a string in reverse
  *@s: string
  */

void print_rev(char *s)
{
	int length;
	int i;

	length = _strlen(s) - 1;
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
