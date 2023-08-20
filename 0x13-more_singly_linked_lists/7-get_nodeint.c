#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the pointer to the address of the first node
 * @index: the index to get the node
 *
 * Return: Address of that node
 * NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = NULL;
	unsigned int idx = 0;

	if (head != NULL)
	{
		current_node = head;
		while (current_node != NULL)
		{
			if (idx == index)
				return (current_node);
			current_node = current_node->next;
			idx++;
		}
	}
	return (NULL);
}
