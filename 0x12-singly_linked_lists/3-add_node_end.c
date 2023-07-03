#include "lists.h"
#include <string.h>

/**
 * add_node_end - prints all the len=ments of a list_t list
 * @head: double pointer to the struct created
 * @str: string to add
 * Return: the number of node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen_recursion(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}

		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;

		return (temp);
	}
	return (NULL);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string to be counted
 *
 * Return: the length of the string
 */
int _strlen_recursion(const char *s)
{

	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
