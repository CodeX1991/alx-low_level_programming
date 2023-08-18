#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to the address of the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL, *temp = NULL;

	current = head;
	while (current != NULL)
	{
		temp = current;
		free(temp);
		current = current->next;
	}
}
