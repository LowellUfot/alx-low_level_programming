#include "lists.h"

/**
 * dlistint_len - returns number of elements in linked list
 * @h: pointer to head node in linked list
 *
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head node
 * @idx: index to insert new node
 * @n: data in new node to be inserted
 *
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *rep;
	size_t length;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == length - 1)
		return (add_dnodeint_end(h, n));
	rep = malloc(sizeof(dlistint_t));
	if (rep == NULL)
		return (NULL);
	rep->n = n;
	if (*h == NULL)
	{
		rep->prev = NULL;
		rep->next = NULL;
		*h = rep;
		return (rep);
	}
	temp = *h;
	while (temp)
	{
		if (count == idx)
		{
			rep->next = temp;
			rep->prev = temp->prev;
			temp->prev->next = rep;
			temp->prev = rep;
		}
		rep = temp->next;
		count++;
	}
	free(rep);
	return (NULL);
}
