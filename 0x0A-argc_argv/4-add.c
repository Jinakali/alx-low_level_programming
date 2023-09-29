#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *main- adds positive numbers
 *@argc: no of arguments
 *@argv: actual argument strings
 *Return:0 on success
 */
int main(int argc, char **argv)
{
	int num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	argv++;

	while (argc > 1)
	{
		num = atoi(*argv);
		if (num > 0 || *argv == 0)
		{
			sum = sum + num;
			argv++;
			argc--;
		}
		else if (num <= 0 && *argv != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
