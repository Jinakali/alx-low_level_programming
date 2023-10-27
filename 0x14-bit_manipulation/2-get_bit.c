#include "main.h"
/**
  *get_bit-returns the value of a bit at a given index.
  *@n:number
  *@index: is the index, starting from 0 of the bit you want to get
  *Return:the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	if (n & (1ul << index))
		return (1);
	else
		return (0);
}
