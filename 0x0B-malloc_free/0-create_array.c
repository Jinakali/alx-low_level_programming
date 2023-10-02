#include "main.h"
/**
  *create_array- create an array
  *@size: array size
  *@c: character to fill array
  *Return: NULL or pointer to array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';

	return (arr);
}
