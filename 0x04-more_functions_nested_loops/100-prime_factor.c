#include <stdio.h>
#include <math.h>
/**
 *main- print largest prime factor
 *
 *Return:0 always
 */
int main(void)
{
	unsigned long int n, l, d;

	n = 612852475143;
	d = 2;

	while (n != 0)
	{
		if (n % d != 0)
		{
			d = d + 1;
		}
		else
		{
			l = n;
			n = n / d;

			if (n == 1)
			{
				printf("%lu\n", l);
				break;
			}
		}
	}
	return (0);
}
