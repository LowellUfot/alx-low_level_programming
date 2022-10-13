#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: integer count of parameters
 *
 * Return: non-zero for success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list sum_args;

	va_start(sum_args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(sum_args, unsigned int);

	va_end(sum_args);
	return (sum);
}
