#include <stdlib.h>
#include "main.h"
#define NULL ((void *)0)
/**
 *_calloc - allocate memory
 *@nmemb: no of elements
 *@size: size of datatype
 *
 *Return: ptr to address of mem allocated or NULL upon failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
