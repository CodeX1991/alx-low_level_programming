#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the address to the first node
 * @index: the index of the node, starting from 0
 *
 * Return: the address of the node
 * if the node does not exist, NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = NULL;
	unsigned int idx = 0;

	current_node = head;
	if (head)
	{
		while (idx < index)
		{
			current_node = current_node->next;
			idx++;
		}
		return (current_node);
	}
	return (NULL);
}
