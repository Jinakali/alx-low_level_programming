#include "main.h"
/**
 * _strspn -find length of a prefix substring in a string
 * @s: string being looked at
 * @accept: substring for comparison
 *
 * Return: prefix length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (l);
	}
	return (l);
}

