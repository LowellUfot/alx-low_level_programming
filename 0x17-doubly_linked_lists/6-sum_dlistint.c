#include "lists.h"

/**
 * sum_dlistint - sums all data in a linked list
 * @head: pointer to head node
 *
 * Return: sum of all data in the list
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int count = 0;

	if (head == NULL)
		return ('\0');

	temp = head;

	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
