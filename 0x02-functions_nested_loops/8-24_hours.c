#include "main.h"

/**
 * jack_bauer - prints every minute of day
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	for (a = 0; a < 24; a++)
	{
		c = a / 10;
		d = a % 10;

		for (b = 0; b < 60; b++)
		{
			e = b / 10;
			f = b % 10;
			_putchar (c + '0');
			_putchar (d + '0');
			_putchar (':');
			_putchar (e + '0');
			_putchar (f + '0');
			_putchar ('\n');
		}
	}
}
