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
				if (l !=0 )
				{
					if (l != n + 1)
					{
						putchar(',');
						putchar(' ');
						if (product < 100)
						{
						putchar(' ');
						if (product < 10)
							putchar(' ');
						}
					}
				}
				if (product < 10)
				{
					putchar(product + '0');
				}
				else if (product > 99)
				{
					putchar(product / 100 + '0');
					putchar((product % 100) / 10 + '0');
					putchar((product % 100) % 10 + '0');
				}
				else
				{
					putchar(product / 10 + '0');
					putchar(product % 10 + '0');
				}
			}
			putchar('\n');
		}
	}
}
}
