#include "main.h"
/**
 * _strcat - concatenate a string
 *@dest:pointer to the destination string
 *@src:pointer to source string
 *
 *Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i = _strlen(dest);
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
