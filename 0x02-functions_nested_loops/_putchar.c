#include <stdio.h>

/**
 *_putchar - prints characters to stdout
 * @ch: character pointer
 *
 * Return: 0 always
 */

void _putchar(char *ch)
{
	while (*ch != '\0')
	{
		putchar(*ch);
		ch++;
	}
	putchar('\n');
}
