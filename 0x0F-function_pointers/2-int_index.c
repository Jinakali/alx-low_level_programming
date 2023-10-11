#include "function_pointers.h"
/**
 *int_index-searches for an integer
 *@array:array
 *@size:number of elements in the array
 *@cmp:pointer to the function to be used to compare values
 *Return: index of the first element for which the cmp != 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
