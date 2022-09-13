#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

/**
 * _putchar - writes the sets of characters ch to stdout
 * @ch: the set of characters to be written to stdout
 *
 * Return: 0 if successful
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

#endif
