#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: the pointer to the head pointer
 *
 * Return: 0 if the list is empty
 * otherwiser the data at that node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data = 0;

	if (head)
	{
		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (data);
}
