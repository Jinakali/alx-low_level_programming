#include "main.h"
/**
 *jack_bauer - print the hours and minutes in 24 hours
 */
void jack_bauer(void)
{
	int i = 0;

	while (i <= 23)
	{
		int l = 0;

		while  (l <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar ((i % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar ((l % 10) + '0');
			_putchar('\n');
			l++;
		}
		i++;
	}
}
