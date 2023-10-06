#include "main.h"
/**
 * _atoi- prints char
 *@s: string
 *Return: the number from string/0 if no number
 */
int _atoi(char *s)
{
	unsigned int result, sign, i, j, stop;

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
/**
 *print_number - print number
 *@n: number to print
 */
void print_number(int n)
{
	unsigned int place_v, num, temp_n;

	place_v = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	temp_n = n;

	while (temp_n >= 10)
	{
		place_v = place_v * 10;
		temp_n = temp_n / 10;
	}
	while (place_v > 0)
	{
		num = n / place_v;
		_putchar('0' + num);
		n = n % place_v;
		place_v = place_v / 10;
	}
}
/**
 *print_s-prints strings without new line
 *@s:string to print
 */
void print_s(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
/**
 * _isdigit -  check for numerical characters
 *@c:character to be checked
 *
 *Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
		r = 1;
	else
		r = 0;
	return (r);
}
/**
 *digit_checker - check if argument only composed of digit
 *@argv: arguments passed to program
 *@argc: no of arguments (including program name) passed
 */
void digit_checker(int argc, char **argv)
{
	int i, c = argc - 1, j;

	argv++;
	for (i = 0; i < c; i++)
	{
		for (j = 0; (*argv)[j] != '\0'; j++)
		{
			if (_isdigit((*argv)[j]) < 1)
			{
				print_s("Error\n");
				exit(98);
			}
		}
		argv++;
	}
}
/**
 *main-multiply 2 nums
 *@argc: no of arguments
 *@argv: actual argument strings
 *Return:0 on success
 */
int main(int argc, char **argv)
{
	int fact1, fact2, result;

	if (argc != 3)
	{
		print_s("Error\n");
		exit(98);
	}
	digit_checker(argc, argv);

	fact1 = _atoi(argv[1]);
	fact2 = _atoi(argv[2]);

	result = fact1 * fact2;
	print_number(result);
	_putchar('\n');
	return (0);
}
