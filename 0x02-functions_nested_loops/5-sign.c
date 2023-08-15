#include "main.h"
/**
 *print_sign - display sign of integer
 *@n:the number to be checked
 *
 *Return:1 if +,0 if 0 and -1 if -
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
