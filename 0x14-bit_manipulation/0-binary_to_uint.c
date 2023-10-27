#include "main.h"
/**
 *_isbit-check if _isbit
 *@s:string
 *Return:0 if all characters bits, -1 otherwise
 */
int _isbit(const char *s)
{
	int i;

	if (s == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '1')
			return (-1);
	}
	return (0);
}
/**
 *_pow-find the power os a number
 *@num:number to find power
 *@power:how many times to multiply the number by itself
 *Return: power
 */
int _pow(unsigned int power, int num)
{
	unsigned int i = power;
	int prod = num;

	if (power == 0)
		return (1);
	if (power == 1)
		return (num);

	while (i > 1)
	{
		prod *= num;
		i--;
	}
	return (prod);
}
/**
 *_strlen - print length of string
 *@s: string whose length must be found
 *
 *Return: string length
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 *binary_to_uint-converts a binary number to an unsigned int
 *@b:string
 *Return:decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, sum = 0;
	int i, len;

	if (b == NULL || b[0] == '\0' || (b[0] == ' ' && b[1] == '\0'))
		return (0);
	if (_isbit(b) != 0)
		return (0);

	len = _strlen(b);
	for (i = len - 1, n = 0; i >= 0; i--, n++)
	{
		sum += ((b[i] - '0') * (_pow(n, 2)));
	}
	return (sum);
}
