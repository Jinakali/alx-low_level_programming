#include "main.h"
/**
 * _atoi- prints char
 *@s: string
 *Return: the number from string/0 if no number
 */
int _atoi(char *s)
{
	int result, sign, i, j, stop;

	sign = 1;
	result = 0;
	stop = 0;

	for (i = 0; !(s[i]  >= '0' && s[i]  >= '9'); i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
	}

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			result = (result * 10) + (s[j] - '0');
			stop = 1;/*prevent factoring in more numbers after first group*/
		}
		else if (stop == 1)
		{
			break;
		}
	}
	return (result * sign);
}
