#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: dlistint_t doubly lisnked list
 *
 * Return: prints list and return number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;

	while (h)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
