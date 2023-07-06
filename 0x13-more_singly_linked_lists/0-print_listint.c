#include "lists.h"

/**
 * print_listint - prints all the len=ments of a list_t list
 * @h: the new list created
 *
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		node_num++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (node_num);
}
