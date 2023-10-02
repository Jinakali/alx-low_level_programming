#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *main- prints  minimum number of coins to make change for an amount of money
 *@argc: no of args
 *@argv: array of pointers to strings of arguments
 *Return: 0 when successful
 */
int main(int argc, char **argv)
{
	int i, min_change_count = 0, change_amount, cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change_amount = atoi(argv[1]);

	if (change_amount  <= 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		while (change_amount >= cents[i])
		{
			change_amount -= cents[i];
			min_change_count++;
		}
	}
	printf("%d\n", min_change_count);
	return (0);
}
