#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 1 if the number is positive. 0 otherwise
 *
 */

int main(void)
{
	int c;
	char d;

	for (c = 0; c <= 9; c++)
	{
		putchar (c + '0');
	}

	for (d = 'a'; d <= 'f'; d++)
	{
		putchar (d);
	}
	putchar ('\n');
	return (0);
}
