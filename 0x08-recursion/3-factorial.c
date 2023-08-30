#include "main.h"
/**
 *factorial - recursively find the factorial of a number
 *@n: a number
 *
 *Return: factorial or -1 if n negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
