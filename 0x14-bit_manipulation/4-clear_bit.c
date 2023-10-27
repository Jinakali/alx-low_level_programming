#include "main.h"
/**
  *clear_bit-sets the value of a bit to 0 at a given index
  *@n:number
  *@index:the index, starting from 0 of the bit you want to set
  *Return: 1 if it worked, or -1 if an error occurred
  *Description: in the bitwise comparison, there must be an inversion of the
  *mask. This ensures that only the inteded bit is changed otherwise
  *you'd be comparing all the bitsto 0, even 1s thus changing them to 0
  *WHEN WORKING WITH BITS VISUALISE THE BITS BY WRITING THEM DOWN
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	else
	{
		*n = (*n & ~(1ul << index));
		return (1);
	}
}
