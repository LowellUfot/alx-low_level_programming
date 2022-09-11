#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 0 if success.
 *
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			for (c = 2; c <= 9; c++)
			{
				if (a < b && b < c)
				{
					putchar (a + '0');
					putchar (b + '0');
					putchar (c + '0');

					if (a != 7 || b != 8 || c != 9)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
