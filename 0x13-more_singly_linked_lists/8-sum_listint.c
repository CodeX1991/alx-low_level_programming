#include "lists.h"

/**
 * sum_listint - returns the sum of all the n of a dlistint_t linked list
 * @head: pointer to the address of the first node
 *
 * Return: the sum of the data of the nodes
 * 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node = NULL;
	int sum;

	current_node = head;
	sum = 0;
	if (head)
	{
		while (current_node != NULL)
		{
			sum += current_node->n;
			current_node = current_node->next;
		}
		return (sum);
	}
	return (sum);
}
