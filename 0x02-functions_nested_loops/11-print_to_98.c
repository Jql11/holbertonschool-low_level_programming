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

	while (n < 98)

	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
}
