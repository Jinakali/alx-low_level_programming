#include <stdio.h>
void print_multiple_3_5(int limit);

/**
  *main - entry
  *
  *Return: 0 always
  */
int main(void)
{
	print_multiple_3_5(1024);
	return (0);
}

/**
 * print_multiple_3_5  - print multiples of 3 and 5
 *@limit: int  to  set range limit
 */
void print_multiple_3_5(int limit)
{
	int i, r_3, r_5, sum;

	sum = 0;
	for (i = 0; i < limit; i++)
	{
		r_3 = i % 3;
		r_5 = i % 5;
		if (r_3 == 0 || r_5 == 0)
			sum = sum + i;
		else
			sum = sum + 0;
	}
	printf("%d\n", sum);
}
