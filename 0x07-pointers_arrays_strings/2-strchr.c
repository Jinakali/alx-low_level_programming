#include "main.h"
#define NULL 0
/**
 * _strchr -find first occurence of a character in a string
 * @s: string being looked at
 * @c:  character being looked for
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
		else if (c == '\0')
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	return (NULL);
}
