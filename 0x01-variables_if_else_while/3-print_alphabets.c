#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 1 if the number is positive. 0 otherwise
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
