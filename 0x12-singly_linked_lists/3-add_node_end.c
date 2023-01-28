#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: the struct use to create node
 * @str: pointer to the data to create a new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (temp);
}

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
