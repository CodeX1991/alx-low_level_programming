#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: the linked llist to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		free(*head);
	}
	head = NULL;
}
