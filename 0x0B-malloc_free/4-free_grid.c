#include "main.h"
/**
  *free_grid- free a 2d array
  *@grid: 2d array
  *@height:array rows
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
