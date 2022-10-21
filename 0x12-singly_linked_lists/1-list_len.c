#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - function that returns number of elements
 * in a linked list_t list
 * @h: linked list_s list variable
 *
 * Return: number of elements in list_s variable
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
