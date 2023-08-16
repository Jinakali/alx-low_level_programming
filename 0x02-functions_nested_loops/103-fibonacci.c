#include <stdio.h>
/**
 *main - entry
 *
 *Return: 0 always
 */
int main(void)
{
	unsigned long int result, a, b, sum;
	int i, limit;

	a = 1;
	b = 2;
	sum = 0;
	limit = 35;
	for (i = 0; i < limit; i++)
	{
		result = a + b;
		a = b;
		b = result;
		if (a < 4000000)
		{
			if ((a % 2) == 0)
				sum = a + sum;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
