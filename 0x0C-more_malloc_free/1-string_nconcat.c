#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of character to append from s2 to s1
 *
 * Return: pointer to a newly allocated space in memory, s1 + s2
 * if the function fails, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0;
	char *mem;
	unsigned int i = 0, a = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
	{
		len++;
		a++;
	}

	mem = malloc(sizeof(char) * (len + n + 1));
	if (mem == NULL)
		return (NULL);

	while (s1[i])
	{
		mem[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		mem[i] = s2[j];
		i++;
		j++;
	}
	mem[i] = '\0';

	return (mem);
}
