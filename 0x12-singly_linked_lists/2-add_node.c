#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node - function that adds a new node at the
 * beggining of a list_t list
 * @head: head of list_s
 * @str: string name of new node
 *
 * Return: address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (*head);
}
