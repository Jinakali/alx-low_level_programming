#include "main.h"
/**
 *reverse_array- reverse_array
 *@a:array
 *@n:size of array
 */
void reverse_array(int *a, int n)
{
	int i, hold;
	int *start, *end;

	start = a;
	end = a;
	n = n - 1;
	for (i = 0; i < n; i++, n--)
	{
		hold = start[i];
		start[i] = end[n];
		end[n] = hold;
	}
}
