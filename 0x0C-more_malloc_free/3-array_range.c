#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: the first element of the array
 * @max: the last element of the array
 * Return: NULL if min > max or malloc fails
 * pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *mem;
	int i = 0, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	mem = malloc(size * sizeof(int));

	if (mem == NULL)
		return (NULL);
	while (min <= max)
	{
		mem[i] = min;
		i++;
		min++;
	}
	return (mem);
}
