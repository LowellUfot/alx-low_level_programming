#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * puts2 - prints every second character of a string and new line
 * @str: string to print
 *
 * Return: void
 */


void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0' && b < _strlen(str); b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
