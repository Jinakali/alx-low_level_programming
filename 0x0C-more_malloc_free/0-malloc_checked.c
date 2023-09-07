#include <stdlib.h>
#include "main.h"
#define NULL ((void *)0)
/**
*malloc_checked- allocate memory and stop program with status 98 upon failure
*@b:size of memory block
*
*Return: pointer to address
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
