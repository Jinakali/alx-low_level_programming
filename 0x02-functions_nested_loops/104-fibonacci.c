#include  <stdio.h>
/**
 *main - entry
 *
 *Return: 0 always
 */
int main(void)
{
	unsigned long int i, result, a, b;

	a = 1;
	b = 2;
	for (i = 0; i < 98; i++)
	{
		printf("%lu", a);
		if (i != 97)
			printf(", ");
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
	return (0);
}
