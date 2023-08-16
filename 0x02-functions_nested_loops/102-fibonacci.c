#include <stdio.h>
void print_f(int limit);

/**
 *main - entry
 *
 *Return: 0 always
 */
int main(void)
{
	print_f(50);
	return (0);
}

/**
 * print_f - print fib series
 *@limit: int  to  set range limit
 */
void print_f(int limit)
{
	 unsigned long long int i, result, a, b;

	a = 1;
	b = 2;
	for (i = 0; i < limit; i++)
	{
		printf("%llu", a);
		if (i != (limit - 1))
			printf(", ");
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
}
