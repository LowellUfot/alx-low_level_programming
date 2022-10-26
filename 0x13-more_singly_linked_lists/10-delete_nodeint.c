#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete nodes at index
 * @head: double pointer to list
 * @index: index of node at listint_t
 *
 * Return: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *currentnode;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	currentnode = *head;

	if (index == 0)
	{
		*head = currentnode->next;
		free(currentnode);
		return (1);
	}

	while (i < (index - 1) && currentnode != NULL)
	{
		currentnode = currentnode->next;
		i++;
	}

	if (i != (index - 1) || currentnode->next == NULL)
		return (-1);
	node = currentnode->next;
	currentnode->next = (currentnode->next)->next;
	free(node);

	return (1);
}
