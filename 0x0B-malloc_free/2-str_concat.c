#include "main.h"
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
/**
 *str_concat -concatenates two strings.
 *@s1: destination
 *@s2: string to be added to s1
 *Return: duplicated string or NULL;
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = _strlen(s1);

	dest = malloc(sizeof(char) * (j + _strlen(s2)) + 1);

	if (dest == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];
	for (k = 0; s2[k] != '\0'; k++)
		dest[i + k] = s2[k];
	dest[i + k] = '\0';

	return (dest);
}
