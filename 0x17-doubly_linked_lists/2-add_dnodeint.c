#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at beginning of list
 * @head: head node in linked list
 * @n: data in new node
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp)
	{
		temp->next = *head;
		temp->prev = NULL;
		temp->n = n;
		if ((*head) != NULL)
			(*head)->prev = temp;
		*head = temp;
	}
	return (temp);
}
