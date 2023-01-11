#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string gieven as a parameter.
 * @str: pointer to the the given string
 *
 * Return: NULL if str = NULL or insufficient memory available
 * On success - a pointer to the duplicated string.
 *
 */
char *_strdup(char *str)
{
	unsigned int i, j, len = 0;
	char *s;

	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (len + 1));
	
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	
	}
	s[len] = '\0';
	return (s);
}
