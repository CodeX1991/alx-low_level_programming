#include "main.h"

/**
 * is_palindrome - check is a srting is a palindrome
 * @s: pinter to the string
 *
 * Return: 1 if it is, otherwise 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (check_palindrome(s, len, 0));
}

/**
 * check_palindrome - check if a string is a palindrome
 * @s: pointer to the string
 * @len: length of the string
 * @idx: counter
 *
 * Return: 1 if it is, otherwise 0
 */

int check_palindrome(char *s, int len, int idx)
{
	if (idx == len / 2)
		return (1);
	if (s[idx] == s[len - idx - 1])
		return (check_palindrome(s, len, idx + 1));
	return (0);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
