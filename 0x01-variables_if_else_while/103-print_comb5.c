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
		int second_digit = 0;

		while (second_digit <= 9)
		{
			int third_digit = 0;

			while (third_digit <= 9)
			{
				int fourth_digit = 0;

				while (fourth_digit <= 9)
				{
					if (first_digit * 10 + second_digit < third_digit * 10 + fourth_digit)
					{
						putchar(first_digit + '0');
						putchar(second_digit + '0');
						putchar(' ');
						putchar(third_digit + '0');
						putchar(fourth_digit + '0');

						if (!(first_digit == 9 && second_digit == 8 && third_digit == 9 && fourth_digit == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					fourth_digit++;
				}
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
