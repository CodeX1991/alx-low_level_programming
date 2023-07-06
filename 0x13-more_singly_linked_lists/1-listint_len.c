#include "lists.h"

/**
 * listint_len - print the number of elements in a linked listint_t list
 * @h: the new list created
 *
 * Return: the number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		node_num++;
		ptr = ptr->next;
	}
	return (node_num);
}
