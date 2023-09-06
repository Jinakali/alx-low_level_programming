#include <stdlib.h>
#include "main.h"
#define NULL ((void *)0)
/**
 *alloc_grid- create a 2d grid whose elements are = 0
 *@width: int width
 *@height:int height
 *
 *Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid_arr;

	if (width == 0 || height == 0)
		return (NULL);
	grid_arr = malloc(height * sizeof(int *));
	if (grid_arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid_arr[i] = malloc(width * sizeof(int));
		if (grid_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid_arr[j]);
			}
			free(grid_arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j  < width; j++)
		{
			grid_arr[i][j] = 0;
		}
	}
	return (grid_arr);
}
