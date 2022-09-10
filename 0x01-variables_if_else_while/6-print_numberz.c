#include <stdio.h>

/**
 * main - program starts here
 * Return: 1 if the number is positive. 0 otherwise
 *
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
