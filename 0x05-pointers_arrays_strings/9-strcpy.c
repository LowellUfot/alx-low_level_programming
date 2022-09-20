#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
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
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0)
 * to the buffer pointed to by des
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 *
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; v <= _strlen(src); v++)
	{
		dest[v] = src[v];
	}
	return (dest);
}
