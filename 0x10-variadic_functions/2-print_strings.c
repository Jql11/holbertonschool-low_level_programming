#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_strings - prints strings, followed by a new line
  *@separator: is the string to be printed between the strings
  *@n: is the number of strings
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *name;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		name = va_arg(args, char *);
		if (name == NULL)
			printf("(nil)");
		else
			printf("%s", name);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
