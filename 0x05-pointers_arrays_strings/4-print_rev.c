#include "main.h"
int _strlen(char *s);

/**
 *print_rev - print reversed string
 *@s: string
 */
void print_rev(char *s)
{
	int i, j, l;
	char *last;

	last = s;
	l = _strlen(s);
	for (i = 0; i < l - 1; i++)
	{
		last++;
	}
	for (j = l - 1; j >= 0; j--)
	{
		_putchar(*last);
		last--;
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
