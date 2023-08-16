#include "main.h"

/**
 *  print_times_table - print times table
 */
void print_times_table(int n)
{
	int i, l, product, q, r, s, t;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (l = 0; l <= n; l++)
			{
				product = l * i;
				if (product < 10)
				{
					putchar(product + '0');
					if (l != n)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
				}
				else if (product > 99)
				{
					q = product / 100;
					r = product % 100;
					s = r / 10;
					t = r % 10;
					putchar(q + '0');
					putchar(s + '0');
					putchar(t + '0');
					if (l != n)
					{
						putchar(',');
						putchar(' ');
					}
				}
				else
				{
					q = product / 10;
					r = product % 10;
					putchar(q + '0');
					putchar(r + '0');
					if (l != n)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
					}
				}
			}
			putchar('\n');
		}
	}
}
