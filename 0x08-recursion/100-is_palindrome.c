#include "main.h"
/**
 *is_palindrome- palindrome checker
 *@s:string
 *Return: 1 when palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0, l;

	l = _strlen_recursion(s) - 1;

	while (i < l)
	{
		if (s[i] != s[l])
			return (0);
		++i;
		--l;
	}
	return (1);
}
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
