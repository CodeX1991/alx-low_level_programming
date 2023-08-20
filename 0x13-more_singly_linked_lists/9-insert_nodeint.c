#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the first node of the list
 * @idx: position to insert the node
 * @n: Data of the node
 *
 * Return: the address of the new_node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *pre_node = NULL, *current_node = NULL;
	unsigned int index = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head != NULL)
	{
		new_node->n = n;
		current_node = *head;
		while (current_node != NULL)
		{
			if (index == idx)
			{
				pre_node->next = new_node;
				new_node->next = current_node;
				current_node = new_node;
				return (current_node);
			}
			pre_node = current_node;
			current_node = current_node->next;
			index++;
		}
	}
	return (NULL);
}
