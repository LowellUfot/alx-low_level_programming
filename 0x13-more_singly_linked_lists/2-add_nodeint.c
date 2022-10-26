#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at beginning of list
 * @head: pointer to head node
 * @n:int element in new node
 *
 * Return: address of new element if successful
 * or NULL if fail
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp_node;

	temp_node = malloc(sizeof(listint_t));

	if (temp_node == NULL)
		return (NULL);

	temp_node->n = n;
	temp_node->next = *head;
	*head = temp_node;

	return (temp_node);
}
