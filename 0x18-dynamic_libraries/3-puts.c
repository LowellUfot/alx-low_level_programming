#include "main.h"

/**
 * _puts - prints a string and new line
 * @str: string to print
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int k = 0;

	while (*(str + k))
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
