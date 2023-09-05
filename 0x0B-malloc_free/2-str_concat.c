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
 *str_concat-  point to a new space in memory which contains s1 + s2 contents
 *@s1:string 1
 *@s2:string2
 *
 *Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, l_sum;
	char *str_a;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";
	l_sum = _strlen(s1) + _strlen(s2);
	str_a = malloc(sizeof(char) * l_sum + 1);
	if (str_a == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str_a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str_a[i + j] = s2[j];
	}
	str_a[i + j] = '\0';
	return (str_a);
}
