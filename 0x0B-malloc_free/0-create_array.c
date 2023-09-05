#include <stdlib.h>
#define NULL ((void *)0)
/**
*create_array- create an array of chars, and initialize it with a specific char
*@size:array size
*@c:char to set elements to
*
*Return: pointer to char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int s, i;
	char *char_arr;

	s = size;

	if (s == 0)
		return (NULL);
	char_arr = malloc(sizeof(char) * s);

	i = 0;

	while (i < s)
	{
		char_arr[i] = c;
		i++;
	}
	if (char_arr[i - 1] == c)
		return (char_arr);
	else
		return (NULL);
}
