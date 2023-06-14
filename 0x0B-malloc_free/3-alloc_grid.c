#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional of integers
 * @width: the col size of the array
 * @height: the row size of the array
 *
 * Return: pointer to the array is successful
 * otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **array, row_idx, col_idx, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (row_idx = 0; row_idx < height; row_idx++)
	{
		array[row_idx] = malloc(sizeof(int) * width);
		if (array[row_idx] == NULL)
		{
			for (j = row_idx; j >= 0; j--)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	for (row_idx = 0; row_idx < height; row_idx++)
	{
		for (col_idx = 0; col_idx < width; col_idx++)
			array[row_idx][col_idx] = 0;
	}
	return (array);
}
