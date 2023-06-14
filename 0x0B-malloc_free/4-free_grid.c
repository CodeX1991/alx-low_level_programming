#include "main.h"

/**
 * free_grid - frees 2D grid prviously created by a alloc_grid function
 * @grid: pointer to allocated array memory
 * @height: the row size of the array
 */

void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
		free(grid[idx]);
	free(grid);
}
