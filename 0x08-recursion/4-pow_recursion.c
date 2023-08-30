#include "main.h"
/**
 *_pow_recursion - recursively find the result of a number 'powered'
 *@x: the number to be raised
 *@y: the superscript of the power
 *
 *Return: result of raising the number to power y or -1 when y -ve.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
