#include "main.h"

/**
 * _strlen_recursion - cCocount the length of a string
 * @s: pointer to the first character of the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
