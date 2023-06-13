#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated memory which contain the content s1
 * if NULL is passed, treat it as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	int idx, idx1, strlen_1, strlen_2;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen_1 = _strlen_recursion(s1);
	strlen_2 = _strlen_recursion(s2);
	concat_str = malloc(sizeof(char) * (strlen_1 + strlen_2 - 1));

	if (concat_str == NULL)
		return (NULL);

	for (idx = 0; idx < strlen_1; idx++)
		concat_str[idx] = s1[idx];

	for (idx1 = 0; idx1 < strlen_2; idx1++)
	{
		concat_str[idx] = s2[idx1];
		idx++;
	}
	concat_str[idx] = '\0';
	return (concat_str);

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
