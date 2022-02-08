#include "main.h"
#include <ctype.h>
#include<stdio.h>
/**
 *print_to_98 - prints n to 98
 *@n: integer
 *Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i = n;
	if (n < 98)
	{
		for (i = 98, i++) {
			_putchar('0' + i);
			_putchar(',');
		}
	}
	else if (n == 98)
	{
		_putchar('0' + n);
		_putchar('\n');
	}
	else if (n > 98)
	{
		for ( i =98, i--) {
			_putchar('0' + i);
		}
	}
}
