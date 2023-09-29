#include "main.h"
/**
  *_isupper- check for uppercase
  *@c:character to be checked
  *
  *Return: 1 if uppercase else 0
  */
int _isupper(int c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
		r = 1;
	else
		r = 0;
	return (r);
}
