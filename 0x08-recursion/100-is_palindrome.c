#include "main.h"
/**
 *_strlen_recursion - recursively find the length of a string
 *@s: string to be evaluated
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome_helper- recursively finds palindromes
 * @left: leftmost char
 * @right: rightmost char
 *
 *Return: 1 if palindrome otherwise 0
 */
int is_palindrome_helper(char *left, char *right)
{
	if (*left == '\0')
		return (1);
	if (*left != *right)
		return (0);
	else
		return (is_palindrome_helper(left + 1, right - 1));
}

/**
 *is_palindrome - recursively find if a string is a palindrome
 *@s: string to be evaluated
 *
 *Return: 1 if palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	char *right, *left;

	int l = _strlen_recursion(s);

	left = s;
	right = s + l - 1;

	if (l == 1 && *s == ' ')
		return (0);
	return (is_palindrome_helper(left, right));
}
