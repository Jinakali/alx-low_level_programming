#include "main.h"
int _strlen(char *s);

/**
 *rev_string- print reversed string
 *@s: string
 */
void rev_string(char *s)
{
	int i, j, l;
	char temporary;

	l = _strlen(s);
	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		temporary = s[i];
		s[i] = s[j];
		s[j] = temporary;
	}
}

/**
 *_strlen - print length of string
 *@s: string whose length must be found
 *
 *Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
