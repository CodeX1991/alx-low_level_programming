#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *allocated_mem;

	allocated_mem = malloc(sizeof(int) * (b + 1));

	if (allocated_mem == NULL)
	{
		free(allocated_mem);
		exit(98);
	}
	return (allocated_mem);
}
