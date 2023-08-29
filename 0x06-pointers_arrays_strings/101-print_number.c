#include "main.h"
/**
 *print_number - print number
 *@n: number to print
 */
void print_number(int n)
{
	unsigned int place_v, num, temp_n;

	place_v = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	temp_n = n;

	while (temp_n >= 10)
	{
		place_v = place_v * 10;
		temp_n = temp_n / 10;
	}
	while (place_v > 0)
	{
		num = n / place_v;
		_putchar('0' + num);
		n = n % place_v;
		place_v = place_v / 10;
	}
}
