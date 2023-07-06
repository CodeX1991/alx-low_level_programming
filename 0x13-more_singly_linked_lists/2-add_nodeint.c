#include "lists.h"
#include <string.h>

/**
 * add_nodeint - new node at the beginning of a list_t list
 * @head: double pointer to the struct created
 * @n: string to add
 * Return: the number of node
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;

		return (*head);
	}
	return (NULL);
}
