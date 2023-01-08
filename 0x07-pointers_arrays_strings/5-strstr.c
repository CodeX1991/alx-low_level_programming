#include "main.h"
#include <stddef.h>

/**
 * _strstr - A function that locates a substring
 * @haystack: the given string
 * @needle: the substring
 *
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*haystack)
	{
		while (*needle)
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}

		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}

	return (NULL);
}
