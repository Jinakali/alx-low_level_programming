#include "main.h"
int length(char *string);

/**
 * _memcpy -copy character from one mem area to another
 * @dest: memory area copied to
 * @src:  memory area copied from
 * @n: no of characters to be copied
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, l;

	l = length(dest);
	for (i = 0; i < n; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
/**
 * length -find string length
 * @string: string
 *
 * Return: string length
 */
int length(char *string)
{
	int i = 0;

	while (string[i] < '\0')
	{
		i++;
	}
	return (i);
}
