#include <stdio.h>
#include "main.h"
/**
  *main-print program name
  *@argc: no of arguments
  *@argv: actual argument strings
  *Return:0 on success
  */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
