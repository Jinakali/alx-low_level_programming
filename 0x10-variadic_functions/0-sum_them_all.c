#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all -  adds variable no of integers
 *@n: no of operands
 *
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, s = 0, i = 0;
	va_list arg_p;

	if (n == 0)
		return (0);
	va_start(arg_p, n);
	for (; i < (int) n; i++)
	{
		s = va_arg(arg_p, int);
		sum += s;
	}
	va_end(arg_p);
	return (sum);
}
