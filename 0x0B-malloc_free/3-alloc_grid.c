#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * alloc_grid - creates a 2-D integer grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D integer grid
 */
int **alloc_grid(int width, int height)
{
	int a = 0;
	int b = 0;
	int **grid;

	if (height < 1)
		return (NULL);
	grid = (int **) malloc(height * sizeof(grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
