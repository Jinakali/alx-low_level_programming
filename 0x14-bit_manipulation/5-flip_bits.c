#include "main.h"
/**
 *flip_bits-returns the number of bits you would need to flip to become another
 *@n:operand 1
 *@m:operand 2
 *Return:number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int no_bits = 0;

	result = n ^ m;
	while (result > 0)
	{
		no_bits = no_bits + (result & 1);
		result = result >> 1;
	}
	return (no_bits);
}
