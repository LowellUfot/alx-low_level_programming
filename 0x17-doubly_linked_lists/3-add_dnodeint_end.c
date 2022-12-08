#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: pointer to head node
 * @n: data in new node
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *rep;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return ('\0');

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;

		return (*head);
	}
	rep = *head;

	while (rep->next)
		rep = rep->next;

	rep->next = temp;
	temp->prev = rep;

	return (temp);
}
