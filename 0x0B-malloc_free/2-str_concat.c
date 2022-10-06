#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new memory of concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1))/*get length of s1 less null terminator*/
	{
		len1++;
	}
	/*len1++;add null terminator to length*/

	while (*(s2 + len2))/*get length of s2 less null terminator*/
	{
		len2++;
	}
	len2++;/*add null terminator to length*/

	concat = malloc((len1 + len2) * sizeof(char));

	/*validate malloc return*/
	if (concat == NULL)
		return (NULL);

	while (i < len1)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (j < len2)
	{
		*(concat + i) = *(s2 + j);
		j++;
		i++;
	}
	return (concat);
}
