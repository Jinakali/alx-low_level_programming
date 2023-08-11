#include <stdio.h>
/**
 *main-entry poin
 *
 *Return:0 when successfull
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e')
			c = c + 0;
		else if (c == 'q')
			c = c + 0;
		else
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
