#include "main.h"
/**
  *alloc_grid- create a 2D array and initialize with 0
  *@width: array column
  *@height:array rows
  *Return: NULL or pointer to  2d array
  */
int **alloc_grid(int width, int height)
{
	int i, j, **grid, k, l;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(sizeof(int) * width);
		if (grid[k] == NULL)
		{
			l = 0;

			while (l < k)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
	}
	i = 0;

	while (i < height)
	{
		j = 0;

		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}
