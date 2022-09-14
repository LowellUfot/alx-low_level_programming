#include "main.h"

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
			_putchar (i + '0');
		}
	}
	else if (n == 98)
	{
		_putchar (n + '0');
	}
	else
	{
		for (i = n; i <= 98; i--)
		{
			_putchar (i + '0');
		}
	}
	_putchar ('\n');
}
