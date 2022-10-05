#include "main.h"

/**
 * _strcpy - A function that copies the string pointed by src
 * including the terminating null byte (\0), to the  buffer
 * pointedd to by dest
 * @dest: pointer to copy to
 * @src: pointer to copy fromm
 *
 * Return: The value of the pointer, dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
