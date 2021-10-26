#include "main.h"
#include <stdlib.h>
/**
 * free _grid - frees a 2 dimensional grid
 * @grid: grid to free
 *@height: height of the grid
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
