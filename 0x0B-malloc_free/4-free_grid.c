#include <stdlib.h>
#include "main.h"
/**
*free_grid- deallocate memory given to a 2d array
*@grid:address of array
*@height:int height of 2d array
*/
void free_grid(int **grid, int height)
{
	int i;

	for(i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
