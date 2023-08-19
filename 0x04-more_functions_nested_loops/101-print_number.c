#include "main.h"
/**
 *print_number- print number
 *@n:numberfor print
 */
void print_number(int n)
{
	int place_v;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n != 0)
	{
		place_v = 1;

		while (n / place_v >= 10)
		{
			place_v = place_v * 10;
		}
		while (place_v > 0)
		{
			_putchar('0' + n / place_v);
			n = n % place_v;
			place_v = place_v / 10;
		}
	}
}
