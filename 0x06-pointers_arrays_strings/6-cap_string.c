#include "main.h"
/**
 *cap_string - cap all words
 *@str:string
 *
 *Return:pointer to string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' || str[i] == ',' ||
str[i] == '.' || str[i] == ';' || str[i] == '!' || str[i] == '(' ||
str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == 34 ||
str[i] == '?')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
