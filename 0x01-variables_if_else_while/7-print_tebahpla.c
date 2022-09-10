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

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
