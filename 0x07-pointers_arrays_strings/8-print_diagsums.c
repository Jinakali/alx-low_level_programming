#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of right and left diagonals
 * @a: array of arrays
 * @size: no of elements
 */
void print_diagsums(int *a, int size)
{
	int i, sum_r, sum_l;

	sum_r = 0;
	sum_l = 0;

	for (i = 0; i < size; i++)
	{
		sum_r = sum_r + a[i * size + i];
		sum_l = sum_l + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_r, sum_l);
}

