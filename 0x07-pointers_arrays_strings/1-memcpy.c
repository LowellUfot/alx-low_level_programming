#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy destination
 * @src: copy source
 * @n: number of times to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	for (i = 0; i < size; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
