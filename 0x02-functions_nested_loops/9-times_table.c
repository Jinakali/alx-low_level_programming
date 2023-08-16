#include "main.h"

/**
 * times_table - print times table
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int p = i * j;

			if (j == 0)
				_putchar(p + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (p < 10)
					_putchar(' ');
				else
					_putchar(p / 10 + '0');

				_putchar(p % 10 + '0');
			}

			j++;
		}

		_putchar('\n');
		i++;
	}
}

