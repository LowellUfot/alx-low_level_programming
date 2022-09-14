#include "main.h"

/**
 * print_last_digit - prints last digit
 * @j: int digit
 *
 * Return: 0 always
 */

int print_last_digit(int j)
{
	int x;

	if (j < 0)
	{
		j = -j;
		x = j % 10;
	}

	if (x < 0)
	{
		x = -x;
	}
	_putchar (x + '0');
	return (x);

}
