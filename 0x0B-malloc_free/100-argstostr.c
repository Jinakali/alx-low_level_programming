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
 *argstostr- concatenates all the arguments of your program
 *@av: strings of arguments
 *@ac:argc
 *Return: NULL or pointer to array
 */
char *argstostr(int ac, char **av)
{
	char *dest, **argv = av;
	int i, j, k, total_l = 0, r = 0, argc = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < argc; i++)
		total_l += _strlen(argv[i]) + 1;/*1 for the new line between arguments*/

	dest = malloc(sizeof(char) * total_l + 1);

	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	/*transferring content to one string*/
	for (j = 0; j < ac; j++)
	{
		for (k = 0; (*av)[k] != '\0'; k++)
			dest[k + r] = (*av)[k];
		dest[k + r] = '\n';
		r += k + 1;/*remembering positionof last string added*/
		av++;
	}
	dest[k + r] = '\0';
	return (dest);
}
