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
	(void)argv;
	argc = argc - 1;

	printf("%d\n", argc);
	return (0);
}
