#include "main.h"

/**
 * _strncat - Concatenate two strings using n byte from src
 * @dest: The first string
 * @src: the second string
 * @n: the n byte of src
 * Return: The dest variable that contains the two string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		*(dest + i) = dest[i];
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}

	dest[n + i] = '\0';
	return (dest);
}
