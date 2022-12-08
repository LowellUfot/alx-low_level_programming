#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: pointer to head node
 * @index: index of node to return
 *
 * Return: node at specified index n
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return ('\0');

	temp = head;

	while (temp != NULL && (count < index))
	{
		count++;
		temp = temp->next;
	}
	return (temp);
}
