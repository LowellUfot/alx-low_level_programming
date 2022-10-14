#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: print format
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	char *sep = "";
	va_list any_args;

	va_start(any_args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(any_args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(any_args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(any_args, double));
				break;
			case 's':
				str = va_arg(any_args, char *);
				if (!str)
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
	printf("\n");
	va_end(any_args);
}
