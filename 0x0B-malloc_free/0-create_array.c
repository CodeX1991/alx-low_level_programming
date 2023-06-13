#include "main.h"

/**
 * create_array - create and initialize an array
 * @size: the seze f the array to be created
 * @c: character to populate the array with
 *
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (idx = 0; idx <= size; idx++)
		array[idx] = c;
	array[idx] = '\0';

	return (array);
}
