#include "main.h"
/**
 *print_binary-prints the binary representation of a number
 *@n:number
 *Description: Numbers are represented in binary in memory
 *principle is we're trying to LOOK at memory bit by bit and print the
 *corresponding 1s and 0s. WE'RE NOT CONVERTING TO BINARY
 */
void print_binary(unsigned long int n)
{
	/*found_first_1 flag helps eliminate leading 0 b4 first 1*/
	int no_bits, i, found_first_1 = 0;

	no_bits = sizeof(n) * 8;
	for (i = no_bits - 1; i >= 0; i--)
	{
		/*1 has to be in unsigned long to match @n byte size*/
		/*first condition prints 1 if result > 0*/
		if (n & (1ul << i))
		{
			_putchar('1');
			found_first_1 = 1;
		}
		else if (found_first_1 == 1)
		{
			_putchar('0');
		}
	}
	if (found_first_1 == 0)
		_putchar('0');
}
