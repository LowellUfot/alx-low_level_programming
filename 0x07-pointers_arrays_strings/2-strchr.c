#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string s
 * @c: character to locate in s
 *
 * Return: pointer to first c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s));
		}
		else
		{
			i++;
		}
	}
	return ('\0');
}
