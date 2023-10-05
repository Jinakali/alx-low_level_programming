#include "main.h"
/**
  *malloc_checked-allocates memory using malloc
  *@b:no of bytes to allocate
  *Return: pointer to beginning of memory
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
