#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-entry point
 *
 *Return:0 when successful
 */
int main(void)
{
	int n;
	int last_digit;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = last_digit = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
n, l);
	}
	return (0);
}
