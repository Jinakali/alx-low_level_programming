#include "main.h"
/**
 *_realloc-reallocates a memory block using malloc and free
 *@ptr:pointer to the memory previously allocated with: malloc(old_size)
 *@old_size:the size, in bytes, of the allocated space for ptr
 *@new_size:the new size, in bytes of the new memory block
 *Return: pointer to new mwmmory block or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			((char *)ptr1)[i] = ((char *)ptr)[i];
	}
	free(ptr);	
	return (ptr1);
}
