#include "main.h"

/**
 * _strspn - gets the length of string to char s
 * @s: string to find lenght upto
 * @accept: string to find s in
 *
 * Return: length till s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
