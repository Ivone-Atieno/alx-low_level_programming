#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the 2D grid previous
 *ly created
 * @grid: 2D grid
 * @height: input height as integerd
 * Return: no return value
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
