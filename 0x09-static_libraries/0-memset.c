#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: filled character
 * @n: number of times to fill
 * Return: s memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int size;

	for (i = 0; i < size; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
