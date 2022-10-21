#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list
 * @head: head of list_s
 * @str: string name of new node
 *
 * Return: address of the new element if pass, NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *temp, *new_temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	temp->len = i;
	temp->next = NULL;
	new_temp = *head;

	if (new_temp == NULL)
	{
		*head = new_temp;
	}
	else
	{
		while (new_temp->next != NULL)
			new_temp = new_temp->next;
		new_temp->next = temp;
	}

	return (*head);
}
