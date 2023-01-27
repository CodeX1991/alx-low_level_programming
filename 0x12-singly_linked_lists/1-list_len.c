#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer to the linked list
 * Return: the number of element in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t num_of_elem = 0;

	while (h)
	{
		if (h == NULL)
			return (0);
		h = h->next;
		num_of_elem++;
	}
	return (num_of_elem);
}
