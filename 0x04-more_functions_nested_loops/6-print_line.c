#include "main.h"

/**
 *print_line - draws a straight line
 *@n: integer
 *Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
