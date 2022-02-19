#include "main.h"
#include <stdio.h>
/**
 *print_number - prints an integer
 *@n: integer
 * Return: Always 0.
 */
int digit_length(int n)
{
	int i = 1;

	while (n != 0)
	{
		i = i * 10;
		n = n / 10;
	}
	return (i / 10);
}
int length_digit (int n)
{
	int length = 0;

	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

int myPow(int x, int y)
{
	int i;
	int number = 1;

	for (i = 0; i < y; ++i)
		number *= x;
	return (number);
}


void print_number(int n)
{
	int pow = digit_length(n);
	int d = length_digit(n);
	int exp;

	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		for (exp = 0; exp < d; exp++)
		{
			_putchar((n / (pow / myPow(10, exp)) % 10) * -1 + '0');
		}
	}
	else
		for (exp = 0; exp < d; exp++)
			_putchar(n / (pow / myPow(10, exp)) % 10 + '0');
}
