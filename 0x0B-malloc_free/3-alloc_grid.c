#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - 2D array of integers
 * @width: width input as integer
 * @height: height input as integer
 * Return: pointer to 2D of integers else
 * return NULL
 */

int **alloc_grid(int width, int height)
{
	int **g, a, b;

if (width <= 0 || height <= 0)
	return (NULL);

g = malloc(height * sizeof(int *));

if (g == NULL)
	return (NULL);

for (a = 0; a < height; a++)
{
	g[a] = malloc(width * sizeof(int));
	if (g[a] == NULL)
	{
		for (b = 0; b < a; b++)
		{
			free(g[b]);
		}
		free(g);
		return (NULL);
	}

	for (b = 0; b < width; b++)
	{
		g[a][b] = 0;
	}
}
return (g);
}
