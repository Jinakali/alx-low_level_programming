#include "main.h"
/**
 *_strcmp - compare 2 strings
 *@s1: one of the strings
 *@s2:one of the strings
 *
 *Return: result, can be 0 if equal or <0 or >0 if unegual
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	result = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = *s1 - *s2;
			break;
		}
	}
	return (result);
}
