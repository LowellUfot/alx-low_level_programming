#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to print
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int b = 0;

	while (*(s + b))
	{
		b++;
	}
	b -= 1;
	while (b >= 0)
	{
		_putchar(*(s + b));
		b--;
	}
	_putchar('\n');
}
