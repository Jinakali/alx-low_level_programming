#include "variadic_functions.h"
/**
  *print_c- print char
  *@arg:arg to be printed
  */
void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
  *print_i- print int
  *@arg:arg to be printed
  */
void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
  *print_f- print float
  *@arg:arg to be printed
  */
void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
  *print_s- print string
  *@arg:arg to be printed
  */
void print_s(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}
/**
  *print_all- prints anything
  *@format:list of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list arg;

	form arr[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(arg, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (arr[j].f != '\0')
		{
			if (arr[j].f == format[i])
			{
				arr[j].print(arg);
				printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
