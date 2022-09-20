#include "main.h"

/**
 * _strlen - print length of string
 * @s: string to find length
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int m = 0;

	while (*(s + m))
	{
		m++;
	}
	return (m);
}
