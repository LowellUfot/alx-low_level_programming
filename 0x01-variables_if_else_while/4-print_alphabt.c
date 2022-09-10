#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: 1 if the number is positive. 0 otherwise
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c !== 'q') && (c !== 'e'))
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
