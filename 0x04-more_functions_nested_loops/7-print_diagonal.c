#include "main.h"

/**
 *print_diagonal - draws a diagonal line
 *@n: integer
 *Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i = 1, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= n; i++)
			{
				if (i == j)
					_putchar(92);
				else if (i < j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
