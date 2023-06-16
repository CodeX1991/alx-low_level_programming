#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the old memory
 * @old_size: the size of the old memory
 * @new_size: the new size of the created memory
 *
 * Return: pointer to the newly created memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_str;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_str = malloc(new_size);
		if (new_str == NULL)
			return (NULL);
		return (new_str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size || old_size > new_size)
		new_str = malloc(new_size);
	if (new_str == NULL)
		return (NULL);
	free(ptr);
	return (new_str);
}
