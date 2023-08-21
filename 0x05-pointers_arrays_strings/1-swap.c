#include "main.h"

/**
 *swap_int-swap values of 2 integers
 *@a: value to bes wapped with b
 *@b: value to bes wapped with a
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
