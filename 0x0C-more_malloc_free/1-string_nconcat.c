#include <stdlib.h>
#include "main.h"
#define NULL ((void *)0)
/**
 *_strlen - print length of string
 *@s: string whose length must be found
 *
 *Return: string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *string_nconcat- allocate memory and join s1 with s2 n bytes
 *@n:n bytes of s2 to be transferred to s1
 *@s2: atring to be copied
 *@s1:string to be copied to s
 *
 *Return: pointer to s with s1 and n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc((_strlen(s1) + n) + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	if (n >= (unsigned int)_strlen(s2))
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			s[j] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			s[i + j] = s2[j];
		}
	}
	s[i + j] = '\0';
	return (s);
}
