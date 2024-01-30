#include "main.h"
/**
 *_islower - determine if lowercase
 *@c:the character to be checked
 *
 *Return:1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
		r = 1;
	else
		r = 0;
	return (r);
}
