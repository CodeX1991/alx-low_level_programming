#include "main.h"
#include <string.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: The pointer variable
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; ++i)
		len += 1;

	return (len);
}
