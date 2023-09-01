#include <stdio.h>
#include <stdlib.h>
/**
  *main-entry to program
  *@argc: no of arguments
  *@argv: array of strings
  *
  *Return: 0 always
  */
int main(int argc, char **argv)
{
	int a, b, product;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		a = atoi(*(argv + 1));
		b = atoi(*(argv + 2));
		product = a * b;
		printf("%d\n", product);
	}
	return (0);
}
