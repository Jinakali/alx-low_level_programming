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
	/*check if argc is greater than 0 then decrement*/
	while (argc--)
	{
		/*access value of argv then increment*/
		printf("%s\n", *argv++);
	}
	return (0);
}
