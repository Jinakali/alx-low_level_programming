#include "main.h"
/**
 *_strncpy - copy
 *@dest:pointer to the destination string
 *@src:pointer to source string
 *@n:no of char to be copied
 *
 *Return: destination pointer to first element
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
