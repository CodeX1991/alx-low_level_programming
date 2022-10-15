#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initialize it with a char
 * @size: Size of the memory for the initialization
 * @c: The specific character to initialize the array with
 *
 * Return: NULL if size = 0 or if it fails. Otherwise: A pointer to the array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
