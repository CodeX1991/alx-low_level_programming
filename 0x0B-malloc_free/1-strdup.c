#include "main.h"

/**
 * _strdup - returns a pointer to a newly created duplicate string
 * @str: The string to be duplicated
 *
 * Return: NULL if str = NULL; pointer to the duplicated string on success
 * Null for insufficient memory available.
 */

char *_strdup(char *str)
{
	char *new_str;
	int strlen, idx;

	if (str == NULL)
		return (NULL);

	strlen =  _strlen_recursion(str);
	new_str = malloc(sizeof(char) * strlen + 1);

	if (new_str == NULL)
		return (NULL);

	for (idx = 0; idx < strlen; idx++)
		new_str[idx] = str[idx];

	new_str[strlen] = '\0';

	return (new_str);

}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string to be counted
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

