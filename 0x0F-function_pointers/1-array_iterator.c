#include "function_pointers.h"
/**
 *array_iterator-array_iterator
 *@array:num array
 *@size:no of elements
 *@action:function pointer to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
