#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 0 if suceessful, 1 if otherwise
 *
 */

int main(void)
{
	int c;
	int d;
	int e;
	int f;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			for (e = 0; e <= 9; e++)
			{
				if (c <= e && d <= f)
				{
					putchar (c + '0');
					putchar (d + '0');
					putchar (' ');
					putchar (e + '0');
					putchar (f + '0');
					putchar (',');
				}
			}
		}
	}
}
