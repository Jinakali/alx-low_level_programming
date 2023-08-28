#include "main.h"

/**
 * _memset -fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: memory area pointed to
 * @b: size of memory to be filled
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
