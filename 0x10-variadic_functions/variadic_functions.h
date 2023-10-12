#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
/**
  *struct format- structure of char format specifiers and pointers to print
  *@f:format specifier
  *@print:pointer to function that prints arguments as specified by format 
  */
typedef struct format {
	char f;
	void (*print) (va_list arg);
}form;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif /*VARIADIC_FUNCTIONS_H_*/
