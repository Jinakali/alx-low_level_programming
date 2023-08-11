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
		c++;
		else if (c == 'q')
			c++;
		else
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
