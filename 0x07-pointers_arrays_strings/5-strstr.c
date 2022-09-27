#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: char set to search for
 *
 * Return: pointer to beginning of
 * the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *ahaystack;
	char *bneedle;

	while (*haystack != '\0')
	{
		ahaystack = haystack;
		bneedle = needle;

		while (*haystack != '\0' && *bneedle != '\0' && *haystack == *bneedle)
		{
			haystack++;
			bneedle++;
		}
		if (!*pneedle)
			return (ahaystack);
		haystack = ahaystack + 1;
	}
	return (0);
}
