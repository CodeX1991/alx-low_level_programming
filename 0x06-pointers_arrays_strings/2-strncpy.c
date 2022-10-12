#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: the buffer to copy the string to
 * @src: The strin to copy
 * @n: The size of the string to copy
 * Return: a pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (j = i++; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
