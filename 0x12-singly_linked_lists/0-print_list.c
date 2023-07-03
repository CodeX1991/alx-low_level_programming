#include "lists.h"

/**
 * print_list - prints all the len=ments of a list_t list
 * @h: the new list created
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t node_num = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (-1);
	ptr = h;

	while (ptr != NULL)
	{
		node_num++;

		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (node_num);
}
