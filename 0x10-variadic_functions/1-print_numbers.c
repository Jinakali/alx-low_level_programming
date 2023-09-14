#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers -  print_numbers with separator
 *@n: no of operands
 *@separator: char array of separator of choice
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_p;

	/**
	 *if (n == 0)
	 *	printf("\n");
	 *	return;
	 */
	va_start(arg_p, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(arg_p, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_p);
}
