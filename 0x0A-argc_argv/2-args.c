#include <stdio.h>
/**
  *main-entry to program
  *@argc: no of arguments
  *@argv: array of strings
  *
  *Return: 0 always
  */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
