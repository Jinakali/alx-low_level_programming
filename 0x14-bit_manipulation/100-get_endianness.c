#include "main.h"
/**
 *get_endianness-checks the endianness
 *Return: 1 if liitle endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *byte_ptr = (unsigned char *)&n;

	if (byte_ptr[0] == 1)
		return (1);
	else
		return (0);
}
