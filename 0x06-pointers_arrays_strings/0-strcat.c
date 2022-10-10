#include "main.h"

/**
 * _strcat - A function that concatenates two stringds
 * @dest: First string
 * @src: Second string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		*(dest + i) = dest[i];
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	dest[i++] = '\0';

	return (dest);
}
