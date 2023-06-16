#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the first element
 * @max: the last element
 *
 * Return: pointer to the array otherwise NULL
 */

int *array_range(int min, int max)
{
	int i, *array, array_size;

	if (min > max)
		return (NULL);
	array_size = max - min + 1;
	array = malloc(sizeof(int) * array_size);
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i] = i;
	return (array);
}
