#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src to dest
 * @dest: Pointer to the buffer.
 * @src: Pointer to the string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

