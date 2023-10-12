#include <stdlib.h>
#include <stdio.h>
/**
  *main-print opcodes
  *@argc:no of args
  *@argv: strings of arguments
  *Return: 0always
  */
int main(int argc, char **argv)
{
	/*point to locattion of main*/
	unsigned char *op = (char *) main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		if (i != 0)
		{
			printf(" ");
		}
		printf("%02x", op[i]);
	}
	printf("\n");
	return (0);
}
