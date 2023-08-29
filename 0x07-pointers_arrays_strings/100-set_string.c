#include "main.h"
/**
 * set_string - change value of one pointer to another's
 * @s: ptr to ptr of string being changed
 * @to: string that replaces the other string
 */
void set_string(char **s, char *to)
{
	*s = to;
}

