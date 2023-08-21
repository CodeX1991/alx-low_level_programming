#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: double pointer to the head
 * @index: the index of the nod to be deleted
 *
 * Return: 1 on success or -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = NULL, *prev_node = NULL, *temp = NULL;
	unsigned int idx = 0;

	if (*head && index > 0)
	{
		current_node = *head;
		while (current_node != NULL)
		{
			if (idx == index)
			{
				temp = current_node;
				prev_node->next = current_node->next;
				free(temp);
				return (1);
			}
			prev_node = current_node;
			current_node = current_node->next;
			idx++;
		}
	}
	if (*head && index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	return (-1);
}
