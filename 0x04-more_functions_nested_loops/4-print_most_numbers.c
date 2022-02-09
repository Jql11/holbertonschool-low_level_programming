#include "main.h"
/**
*print_most_numbers - prints the numbers from 0 to 9
*
*
*Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);

		}
		a++;
	}
	_putchar('\n');
}
