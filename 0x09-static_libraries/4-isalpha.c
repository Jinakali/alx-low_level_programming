#include "main.h"
/**
 *_isalpha - determine if lowercase
 *@c:the number to be checked
 *
 *Return:1 if letter,lowercase and uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	int r;

	if ((c >= 'A'  && c <= 'Z') || (c >= 'a' && c <= 'z'))
		r = 1;
	else
		r = 0;
	return (r);
}
