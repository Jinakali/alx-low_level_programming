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
	while (argc == 1)
	{
		printf("%s\n", *argv);
		argc--;
	}
	return (0);
}
