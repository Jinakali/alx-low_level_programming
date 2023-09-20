#include "main.h"
/**
 *print_number- print number
 *@n:numberfor print
 */
void print_number(int n)
{
	unsigned int place_v;

	place_v = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while ((n / place_v) > 9)
		place_v = place_v * 10;

	while (place_v >= 1)
	{
		_putchar(n / place_v + '0');
		n = n % place_v;
		place_v = place_v / 10;
	}
}
