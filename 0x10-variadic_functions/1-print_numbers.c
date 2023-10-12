#include "variadic_functions.h"
/**
  *print_numbers-prints numbers, followed by a new line
  *@separator:string to be printed between numbers
  *@n:number of integers passed to the function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	/**
	*if (n == 0)
		*return;
	*/
	va_start(args, n);

	for (i = n; i > 0; i--)
	{
		printf("%d", va_arg(args, int));
		if (i > 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
