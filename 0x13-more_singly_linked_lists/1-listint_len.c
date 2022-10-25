#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - prints all elements of a linked list
 * @h: pointer to linked list
 *
 * Return: the number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
