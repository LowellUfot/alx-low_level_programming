#include "main.h"
#include <stdio.h>

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

	if (n < 0 || n > 15)
	{
		exit;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = (i * j);

				if (j == 0)
				{
					_putchar('0' + prod);
				}
				else if (prod <= 9)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar ('0' + pro);
				}
				else if (prod > 9)
				{
					_putchar (',');
					_putchar (' ');
					_putchar ('0' + (product / 10));
					_putchar ('0' + (product % 10));
				}
			}
			_putchar ('\n');
		}
	}

}
