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
	int i = 0, n;
	char c;
	float f;
	char *str;
	char *sep = "";

	va_start(args, format);
	if (format)
	{
		while(format[i])
		{
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int);
					printf("%s%c", sep, c);
					break;
				case 'i':
					n = va_arg(args, int);
					printf("%s%d", sep, n);
					break;
				case 'f':
					f = va_arg(args, double);
					printf("%s%f", sep, f);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("%s(nil)", sep);
					}
					else
					{
						printf("%s%s", sep, str);
						break;
					}
			}
			sep = ", ";
			i++;
		}
		va_end(args);
		printf("\n");
	}
}
