#include "main.h"
/**
 * _isdigit -  check for uppercase
  *@c:character to be checked
  *
  *Return: 1 if digit else 0
  */
int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
		r = 1;
	else
		r = 0;
	return (r);
}
