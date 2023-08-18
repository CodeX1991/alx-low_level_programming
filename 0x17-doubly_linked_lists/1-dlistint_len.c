#include "lists.h"

/**
 * dlistint_len - prints all the elements of a distint_t list
 * @h: the given head pointer
 *
 * Return: the number of element in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num_elem = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			num_elem++;
		}
	}
	return (num_elem);
}
