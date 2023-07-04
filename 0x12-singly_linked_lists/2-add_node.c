#include "lists.h"
#include <string.h>

/**
 * add_node -  new node at the beginning of a list_t list
 * @head: double pointer to the struct created
 * @str: string to add
 * Return: the number of node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen_recursion(str);
		new->next = *head;
		*head = new;

		return (*head);
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
