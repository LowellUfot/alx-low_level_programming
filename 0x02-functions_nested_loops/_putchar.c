#include <stdio.h>                                                                                                      

/**
 * _putchar -prints sets of characters to the stdout
 *
 * @ch -points to set of characters to be printed
 *
 * Return: 0 always
 */

void _printchar(char *ch)
{
	while (*ch != '\0')
	{
		putchar(*ch);
		ch++;
	}
	putchar('\n');
}
