#include "main.h"
/**
 *print_last_digit - print last digit
 *@num: parameter is an integer
 *
 *Return:0
 */
int print_last_digit(int num)
{
	int i = num % 10;

	if (i < 0)
		i  = -i;
	_putchar('0' + i);
	return (i);
}
