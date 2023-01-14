#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Funnction that reallocates a memory block using malloc and free
 * @ptr: the old memory occupied
 * @old_size: the size of the ptr
 * @new_size: the new size of th memory to be made available
 * Return: pointer to the new memory if new_size > old_size
 * pointer to old memory if new_size == old_size
 * pointer to the new memory if ptr is NULL
 * NULL if new_size == 0 and ptr not equal NULL
 * otherwise return ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;

	if (new_size > old_size)
	{
		mem = malloc(new_size);
		free(ptr);

		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		free(ptr);

		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
