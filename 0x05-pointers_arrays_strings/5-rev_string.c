#include "main.h"

/**
 * _strlen - rturns length of string
 * @s: strng
 *
 * Return:length
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
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char r;

	while (i < j)
	{
		r = s[i];
		s[i] = s[j];
		s[j] = r;
		i++, j--;
	}
}
