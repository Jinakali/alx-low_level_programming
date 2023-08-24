#include "main.h"
/**
 *leet - convert to leetcode
 *@str:string
 *
 *Return:pointer to string
 */
char *leet(char *str)
{
	int i, j;
	char letter[] = {'a','e','o','t','l'};
	char number[] = {'4','3','0','7','1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letter[j] || str[i] == letter[j] - 32 )
				str[i] = number[j];
		}
	}
	return (str);
}
