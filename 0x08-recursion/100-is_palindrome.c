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
