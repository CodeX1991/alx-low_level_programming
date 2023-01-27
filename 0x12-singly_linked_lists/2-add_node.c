#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - count the number of character in a string
 * @s: the pointer to the given string
 * Return: the count of the int data type
 */
int _strlen(const char *s)
{
	int len = 0;

	do {
		len++;
		s++;
	} while (*s);

	return (len);
}

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer the struct type list_t
 * @str: pointer to the string or data to create a node with
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head != NULL && str != NULL)
	{
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
			return (NULL);
		ptr->str = strdup(str);
		ptr->len = _strlen(str);
		ptr->next = NULL;
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	return (0);
}
