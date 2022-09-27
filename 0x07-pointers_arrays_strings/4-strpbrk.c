#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string set to find occurence
 * @accept: string to search for any string in s
 *
 * Return: pointer to byte in S or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
