#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from int n to 98
 * @n: start of number count
 *
 * Return: 0 always
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (i = n; i <= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
	_putchar ('\n');
}
