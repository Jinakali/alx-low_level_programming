#include "main.h"
#define NULL 0
/**
 * _strstr - find first occurence of a substring and point to it
 * @haystack: string being looked through
 * @needle: substring
 *
 * Return: pointer to  first occurence or NULL if no match found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
		{
			ptr = &haystack[i];
			return (ptr);
		}
	}
	return (NULL);
}

