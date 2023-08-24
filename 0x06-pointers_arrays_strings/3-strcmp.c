#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	return (0);
}

