#include <stdlib.h>
#define NULL ((void *)0)
/**
*_strdup-  returns pointer to new space in memory, which contains a string copy
*@str:string to be duplicated
*
*Return: pointer to char
*/
char *_strdup(char *str)
{
	unsigned int i, l;
	char *str_dup;

	if (str == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
	{
		j++;
	}
	str_dup = malloc(sizeof(char) * j);
	if (str_dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		str_dup[i] = str[i];
	}
	str_dup[i] = '\0';
	return (str_dup);
}
