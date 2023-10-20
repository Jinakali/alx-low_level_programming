#include "lists.h"
/**
  *before_main-print a string before main execution
  */
void before_main(void)
{
	char *s = "You're beat! and yet, you must allow,\n";
	char *s1 = "I bore my house upon my back!\n";

	printf("%s%s", s, s1);
}
