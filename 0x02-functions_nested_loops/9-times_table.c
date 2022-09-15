#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = (i * j);

			if (j == 0)
			{
				_putchar ('0' + prod);
			}
			else if (prod <= 9)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + prod);
			}
			else if (prod > 9)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + (prod / 10));
				_putchar ('0' + (prod % 10));
			}
		}
		_putchar ('\n');
	}
}
