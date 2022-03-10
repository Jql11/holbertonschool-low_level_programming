#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print everything
 * @format: list of types of arguments
 * Return: 0
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str,  *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", sep);
					break;
				}
				printf("%s%s", sep, str);
				break;
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
