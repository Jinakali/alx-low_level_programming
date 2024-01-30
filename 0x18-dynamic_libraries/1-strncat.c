#include "main.h"
/**
 *_strncat - cat a string while relying on both null terminator & n characters
 *@dest:pointer to the destination string
 *@src:pointer to source string
 *@n: no of characters to be concatenated
 *
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = _strlen(dest);
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
