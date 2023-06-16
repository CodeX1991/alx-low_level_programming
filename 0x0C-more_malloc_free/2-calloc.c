#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of member of the array
 * @size: of the data type
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_mem;
	unsigned int i;
	char *zeroes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocated_mem = malloc(nmemb * size);

	if (allocated_mem == NULL)
		return (NULL);

	zeroes = allocated_mem;

	for (i = 0; i <= (nmemb * size); i++)
		zeroes[i] = 0;

	return (allocated_mem);
}
