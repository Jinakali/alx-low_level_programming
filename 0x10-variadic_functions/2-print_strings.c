#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings -  print_strings with separator
 *@n: no of strings
 *@separator: char array of separator of choice
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *temp;
	va_list arg_p;

	va_start(arg_p, n);
	for (; i < n; i++)
	{
		temp = va_arg(arg_p, char*);
		if (temp != NULL)
			printf("%s", temp);
		else if (temp == NULL)
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_p);
}
