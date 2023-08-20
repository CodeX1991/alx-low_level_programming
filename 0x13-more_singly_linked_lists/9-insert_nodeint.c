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
	listint_t *new_node = NULL, *current_node = NULL;
	unsigned int index = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current_node = *head;

	if (idx == 0)
	{
		new_node->next = current_node;
		*head = new_node;
		return (new_node);
	}

	while (index < (idx - 1))
	{
		if (current_node == NULL || current_node->next == NULL)
			return (NULL);
		current_node = current_node->next;
		index++;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
