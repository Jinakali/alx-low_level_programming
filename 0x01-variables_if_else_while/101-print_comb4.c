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
			int third_digit = second_digit + 1;

			while (third_digit <= 9)

			{
				putchar(first_digit + '0');
				putchar(second_digit + '0');
				putchar(third_digit + '0');
				if (first_digit != 7 || second_digit != 8 || third_digit != 9)
				{
					putchar(',');
					putchar(' ');
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
