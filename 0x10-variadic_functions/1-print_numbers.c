#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 *@separator: is the string to be printed between numbers
 *@n: number of integers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
