#include "main.h"

/**
 * check_palindrome - check for palindrome string
 * @s: pointer to the string
 * 
 * Return: 1 if is a palindrome or 0 otherwis
 */

int check_palindrome(char *s, int i)
{
	int len;

	len = _strlen_recursion(s);

	if (*s == s[len / 2])
		return (1);
	if (*s == s[len - i -1])
	{
		s++;
		return (check_palindrome(s, i + 1));
	}

	return (0);
}

/**
 * _strlen_recursion - Find the length of a string
 * @s: pointer to the string
 *
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to be chaecked
 *
 * Retrun: 1 if it is or 0 otherwise
 */
int is_palindrome(char *s)
{
	if (!(*s))
		return (1);
	return (check_palindrome(s, 0));
}
