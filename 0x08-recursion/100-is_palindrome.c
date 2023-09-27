#include "main.h"
/**
  *is_palindrome_h- check if palindrome
  *@s:string
  *@i: beginning of string
  *@l: end of string
  *Return: 1 if palindrome;
  */
int is_palindrome_h(char *s, int i, int l)
{
	if (i > l)
		return (1);
	if (s[i] != s[l])
		return (0);
	return (is_palindrome_h(s, i + 1, l - 1));
}
/**
 *is_palindrome- palindrome checker
 *@s:string
 *Return: 1 when palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0, l;

	l = _strlen_recursion(s) - 1;

	return (is_palindrome_h(s, i, l));
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
