#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *main-multiply 2 nums
  *@argc: no of arguments
  *@argv: actual argument strings
  *Return:0 on success
  */
int main(int argc, char **argv)
{
	int fact1, fact2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	fact1 = atoi(argv[1]);
	fact2 = atoi(argv[2]);
	printf("%d\n", fact1 * fact2);
	return (0);
}
