#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by my alloc_grid function.
 * @grid: first parameter
 * @height: second parameter
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
