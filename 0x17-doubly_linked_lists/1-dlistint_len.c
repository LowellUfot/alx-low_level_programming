#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: doubly linked list
 *
 * Return: number of elements in a list
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
