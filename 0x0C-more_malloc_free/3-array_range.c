#include <stdlib.h>
#include "main.h"
#define NULL ((void *)0)
/**
 *array_range - allocate memory for an int array
 *@min: beginning of range  elements
 *@max: end of range of elements
 *
 *Return: ptr to address of mem allocated or NULL upon failure
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, temp;

	temp = min;
	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; temp <= max; i++)
	{
		ptr[i] = temp;
		temp++;
	}
	return (ptr);
}
