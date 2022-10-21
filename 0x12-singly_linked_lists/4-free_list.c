#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function to free a list_t list
 * @head: head of list_t list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
