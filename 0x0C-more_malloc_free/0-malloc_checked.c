#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocated_mem;

	allocated_mem = malloc(b);

	if (allocated_mem == NULL)
	{
		exit(98);
	}
	return (allocated_mem);
}
