#include "variadic_functions.h"
/**
  *print_strings-prints strings, followed by a new line
  *@separator:string to be printed between numbers
  *@n:number of strings passed to the function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	if (n == 0)
		return;
	va_start(args, n);

	for (i = n; i > 0; i--)
	{
		s = va_arg(args, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i > 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
