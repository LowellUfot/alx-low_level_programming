#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by new line
 * @separator: string to print between strings
 * @n: variable parameter count
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list str_args;

	va_start(str_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_args, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_args);
}

