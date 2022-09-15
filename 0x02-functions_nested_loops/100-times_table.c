#include "main.h"
#include <stdlib.h>

/**
 * print_times_table - prints n times table
 * @n - int variable to print for
 * 
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n < 0 || n > 15)
	{
		exit(1);
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

}
