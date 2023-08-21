#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the buffer.
 * @src: Pointer to the string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

