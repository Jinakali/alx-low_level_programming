#include <stdio.h>
#include <stdlib.h>
/**
 *is_there_letter-check if any argument isn't numeric
 *@argc: no of arguments
 *@argv: array of strings
 *
 *Return: 0 always unless a letter present
 */
int is_there_letter(int argc, char **argv)
{
	int c, f;

	c = 1;

	for (; c < argc; c++) 
	{
        char *arg = *(argv + c);
        f = atoi(arg);
        
        if (f == 0 && arg[0] != '0') 
	{
            return (1); 
        }
    }
    return (0);
}
}
/**
 *main-entry to program
 *@argc: no of arguments
 *@argv: array of strings
 *
 *Return: 0 always
 */
int main(int argc, char **argv)
{
	int i = 1, a, b, j, d, sum = 0, f_sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		a = atoi(*(argv + i));
		sum = sum + a;
		i++;
	}
	if (sum == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		b = is_there_letter(argc, argv);
	}
	if (b == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (j = 1; j < argc; j++)
		{
			d = atoi(*(argv + j));
			if (d > 0)
				f_sum += d;
		}
	printf("%d\n", f_sum);
	return (0);
}
