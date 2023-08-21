#include "main.h"
int _strlen(char *s);

/**
 *puts2- print every other word
 *@str: string
 */
void puts2(char *str)
{
	int i, l;

	l = _strlen(str);
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
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
