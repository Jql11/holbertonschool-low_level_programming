#include "main.h"
/**
*more_numbers - prints 10 times the numbers
*
*
*Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i = 0, n;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n / 10 > 0)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
