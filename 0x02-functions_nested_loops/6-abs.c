#include "main.h"
/**
 *_abs - display absolute
 *@num: parameter is an integer
 *
 *Return:0
 */
int _abs(int num)
{
	int i = num;

	if (i < 0)
		i = -i;
	else
		i = i;
	return (i);
}
