#include "main.h"
/**
  *array_range-allocates memory for an array, using malloc.Mem initialised
  *@min:ist array element
  *@max: last element in array
  *Return: ptr at beginning of mem or NULL
  */
int *array_range(int min, int max)
{
	int *ptr, i, array_size;

	if (min > max)
		return (NULL);
	array_size = max - min + 2;
	ptr = malloc(array_size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= array_size; i++)
		ptr[i] = min++;
	return (ptr);
}
