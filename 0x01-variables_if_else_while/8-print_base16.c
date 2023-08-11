#include <stdio.h>
/**
 *main-entry point
 *
 *Return:0 when successful
 */
int main(void)
{
	int i  = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
