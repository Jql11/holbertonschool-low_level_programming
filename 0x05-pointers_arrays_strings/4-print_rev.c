#include "main.h"

/**
 * print_rev - prints a string in reverse
 *@s: string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}


	for (i = length; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
