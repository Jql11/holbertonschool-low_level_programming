#include "main.h"
#include <ctype.h>
#include<stdio.h>
/**
 *print_last_digit - print last digit
 *@r: integer
 *Return: Always 0 (Success)
 */

int print_last_digit(int r)
{
	int lastdigit, d;

	lastdigit = r % 10;

	if (r <= 0)
	{
		d = lastdigit * -1;
		_putchar(d + '0');
		return (d);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}


