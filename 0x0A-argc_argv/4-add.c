#include <stdlib.h>
#include <ctype.h>
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
	int num, sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	argv++;

	while (argc > 1)
	{
		num = atoi(*argv);

		for (i = 0; (*argv)[i] != '\0'; i++)
		{
			if (num <= 0 && !(isdigit((*argv)[i])))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + num;
		argv++;
		argc--;
	}
	printf("%d\n", sum);
	return (0);
}
