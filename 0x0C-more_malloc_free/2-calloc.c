#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: Number of element of the array
 * @size: size of the bytes of the array
 *
 * Return: pointer to the allocated memory
 * NULL is nmemb or size is 0 Or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;
	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	while (i < size * nmemb)
	{
		filler[i] = '\0';
		i++;
	}

	return (mem);
}
