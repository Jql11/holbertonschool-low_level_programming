#include "main.h"
#include <ctype.h>
#include<stdio.h>
/**
 *print_times_table - print times table
 *@n: integer
 *Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i, j, l;

	if (n <= 15 && n >=  0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				l = i * j;
				if (j == 0)
					_putchar(l + '0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (l > 9 && l <= 99)
					{
						_putchar(' ');
						_putchar(l / 10 + '0');
						_putchar(l % 10 + '0');
					}
					else if (l <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(l + '0');
					}
					else
					{
						_putchar(l / 100 + '0');
						_putchar(l % 100 / 10 + '0');
						_putchar(l % 10 + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
