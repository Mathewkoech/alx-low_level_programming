#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns pointer to 2D of array
 *@height:height of array
 *@width:width of array
 *Return:pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)

	{
		return (NULL);
	}
	grid = (int **)malloc(height  * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
	}

	if (grid[i] == NULL)
	{
		for (; i >= 0; i--)
		{
			free(grid[i]);
		}

		free(grid);

		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
