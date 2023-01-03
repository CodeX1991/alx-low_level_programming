#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: pointer to the first element of the string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c in the string s
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i, j = 0;

	while (s[j])
	{
		j++;
	}

	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			s += i;
		}
	}
	return (s);
}
