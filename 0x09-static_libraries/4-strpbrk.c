#include "main.h"
#define NULL 0
/**
 * _strpbrk - find first occurence of character in string aand pointer break
 * @s: string being compared with characters in accept
 * @accept: characters for comparison
 *
 * Return: pointer to break of first occurence or NULL if no match found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return (NULL);
}
