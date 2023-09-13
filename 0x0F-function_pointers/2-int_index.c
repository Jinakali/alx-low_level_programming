#include "function_pointers.h"
/**
 *int_index - find matching index
 *@array: array of numbers
 *@cmp: function pointer to comparison function
 *@size: array size
 *
 *Return: index of int when successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
				return (i);
		}
	}
	return (-1);
}
