#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: First string
 * @s2: second string
 *
 * Return:NULL on failure, empty string if NULL is passed
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len = 0;
	char *concat_str;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");

	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len++;

	concat_str = malloc(sizeof(char) * (len + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		concat_str[i++] = s2[j];

	concat_str[++i] = '\0';
	return (concat_str);

}
