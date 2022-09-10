#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 0 if sucess. 1 if otherwise
 *
 */

int main(void)
{
	int c;
	int d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (c != d && c < d)
			{
				putchar (c + '0');
				putchar (d + '0');
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
