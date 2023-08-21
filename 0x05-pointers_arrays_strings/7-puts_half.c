#include "main.h"
int _strlen(char *s);

/**
 *puts_half - print every other word
 *@str: string
 */
void puts_half(char *str)
{
	int i, l, j;
	char *start;

	start = str;
	l = _strlen(str);
	if (l / 2 != 0)
		l = l - 1;
	for (i = 0; i <= l / 2; i++)
	{
		start++;
	}
	for (j = i; j <= l; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

/**
 *_strlen - print length of string
 *@s: string whose length must be found
 *
 *Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
