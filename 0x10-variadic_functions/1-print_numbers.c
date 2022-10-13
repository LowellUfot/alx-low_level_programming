#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by new line
 * @separator: string to print between numbers
 * @n: variable parameter count
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list num_args;

	va_start(num_args, n);

	if (separator == NULL)
		exit(0);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num_args, unsigned int);
		printf("%d", x);
		printf("%s", separator);
	}
	va_end(num_args);
}
