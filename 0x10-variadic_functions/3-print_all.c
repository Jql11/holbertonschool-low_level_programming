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
	double fl;
	char *str,  *sep = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
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
					fl = va_arg(args, double);
					printf("%s%f", sep, fl);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("%s(nil)", sep);
					printf("%s%s", sep, str);
					break;
			}
			sep = ", ";
			i++;
		}
		va_end(args);
		printf("\n");
	}
}
