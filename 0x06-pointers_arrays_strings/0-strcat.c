#include "main.h"
int _strlen(char *s);
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

/**
 * _strlen - string length
 *@s:pointer to the string
 *
 *Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
