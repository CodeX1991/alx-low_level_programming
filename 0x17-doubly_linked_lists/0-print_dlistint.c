#include "lists.h"

/**
 * print_dlistint - prints all the elements of a distint_t list
 * @h: the given head pointer
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int num_node = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			num_node++;
		}
	}
	return (num_node);
}
