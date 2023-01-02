#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: pointer to where to copy the memory to
 * @src: pointer to where to copy the memory from
 * @n: size of the byte to copy.
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
