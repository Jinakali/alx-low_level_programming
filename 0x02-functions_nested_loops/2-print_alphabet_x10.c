#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet x10
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;
	}
}
