#include <stdio.h>
/**
 *main-entry point
 *
 *Return:0 when successful
 */
int main(void)
{
	int first_digit = 0;

	while (first_digit <= 9)
	{
		int second_digit = first_digit + 1;

		while (second_digit <= 9)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');
			second_digit++;
			if ((first_digit < 8) || (second_digit < 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
