#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2d array of ints
 * @width: the width of grid
 * @height: The height of grid
 * Return: Pointer to the newly allocated space in memory,
 * which contains the 2d array. Each element grid initialized to 0
 * If it fails, or if width or height is less than or equal to 0, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
