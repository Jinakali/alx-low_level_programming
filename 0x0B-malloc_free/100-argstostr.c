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
*argstostr- convert args to str
*@ac: int no of arg
*@av:address to argument strings
*
*Return: pointer to string
*/
char *argstostr(int ac, char **av)
{
	char *str_a, *temp;
	int i, j, k, l_sum;

	l_sum = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		l_sum += _strlen(av[i]) + 1;
	}
	str_a = malloc((l_sum + 1) * sizeof(char));
	if (str_a == NULL)
		return (NULL);
	temp = str_a;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			*temp = av[j][k];
			temp++;
		}
		*temp = '\n';
		temp++;
	}
	*temp = '\0';
	return (str_a);
}
