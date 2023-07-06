#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - prints all the len=ments of a listint_t list
 * @head: double pointer to the struct created
 * @n: string to add
 * Return: the number of node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (temp);
}
