#include "lists.h"

/**
 * free_listint - free a list_t list
 * @head: the linked llist to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
		free(head);
	}
}
