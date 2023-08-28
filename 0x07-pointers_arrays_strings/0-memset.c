#include "main.h"

/**
 * _memset -fills the first n bytes of the memory
 * @s: memory area pointed to
 * @n: size of memory to be filled
 * @b: character to be filed in
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
