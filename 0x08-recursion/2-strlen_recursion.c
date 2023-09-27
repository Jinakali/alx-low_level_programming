#include "main.h"
/**
 *_strlen_recursion-_strlen via recursion
 *@s:string
 *Return: strlength
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
