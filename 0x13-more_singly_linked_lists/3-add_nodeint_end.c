#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to head node
 * @n: new node int element
 *
 * Return: address of the new element
 * or NULL if failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *current_node;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (head == NULL)
	{
		*head = end_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = end_node;
	}
	return (end_node);
}
