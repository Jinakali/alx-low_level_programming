#include "main.h"
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
/**
 *string_nconcat-concatenates two strings
 *@s1:string
 *@s2:string
 *@n: no of bytes of s2 to copy
 *Return: dest or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int r1, r2, i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r1 = _strlen(s1);
	r2 = _strlen(s2);
	if (n > r2)
		n = r2;

	dest = malloc(sizeof(char) * (r1 + n + 1));
	if (dest == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
	{
		dest[i] = s1[j];
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = s2[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
