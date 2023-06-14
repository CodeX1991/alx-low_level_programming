#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional of integers
 * @width: the row size of the array
 * @height: the col size of the array
 *
 * Return: pointer to the array is successful
 * otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row_idx, col_idx;

	if (width <= 0 || height <= 0)
		return (NULL);
	if (width <= 0 && height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * width);
	if (array == NULL)
		return (NULL);
	for (row_idx = 0; row_idx < width; row_idx++)
		array[row_idx] = malloc(sizeof(int) * height);
	for (row_idx = 0; row_idx < width; row_idx++)
	{
		for (col_idx = 0; col_idx < height; col_idx++)
			array[row_idx][col_idx] = 0;
	}
	return (array);
}
