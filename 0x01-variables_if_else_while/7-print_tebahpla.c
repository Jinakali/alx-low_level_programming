#include <stdio.h>
/**
 *main-entry point
 *
 *Return:0 when successful
 */
int main(void)
{
	int i  = 0;

	while (i <= 25)
	{
		putchar(122 - i);
		i++;
	}
	putchar('\n');
	return (0);
}
