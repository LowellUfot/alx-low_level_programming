#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 1 if sucess. 0 otherwise
 *
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
