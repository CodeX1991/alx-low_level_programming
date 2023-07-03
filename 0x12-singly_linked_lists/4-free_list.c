#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: the linked llist to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
		free(head);
	}
}
