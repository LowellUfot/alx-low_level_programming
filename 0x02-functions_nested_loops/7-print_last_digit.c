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

	x = j % 10;
	_putchar ('0' + x);
	return (x);
}
