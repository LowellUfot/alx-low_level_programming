#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * which contains a copy of char *str
 * @str: string to make copy of in new memory
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i = 0;

	if (str == NULL) /*validating str parameter*/
		return (NULL);

	while (*(str + len))
		len++;
	len++; /*add the null terminator to length*/

	dup = malloc(len * sizeof(char));

	/* validate malloc return */
	if (dup == NULL)
		return (NULL);

	while (i < len)
	{
		*(dup + i) = *(str + i);
		i++;
	}
	return (dup);
}
