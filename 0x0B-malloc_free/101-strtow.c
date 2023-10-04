#include "main.h"
/**
 *word_count- count words in string
 *@s:string
 *Return:words num
 */
int word_count(char *s)
{
	int i, c = 0;

	if (s == NULL)
		return (0);

	i = 0;
	/*remove all whitespaces b4 first word*/
	while (s[i] == ' ')
		i++;
	if (s[i] == '\0')/*when string empty*/
		return (0);

	c = 1;/*count first word*/
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')/*looking at spaces within string*/
		{
			/*ignore consecutive spaces*/
			while (s[i + 1] == ' ')
				i++;
			/*wen end of string reached*/
			if (s[i + 1] == '\0')
				break;
			c++;
		}
	}
	return (c);
}
/**
 *c_strdup-extract words from string, allocate wordlength byte memory
*@str:word start
 *@start:word start
 *@end:word end
 *Return: char pointer with word or NULL
 */
char *c_strdup(char *str, int start, int end)
{
	char *dest;
	int len = end - start, i;

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);
	for (i = start; i < end; i++)
		dest[i - start] = str[i];
	dest[i - start] = '\0';

	return (dest);
}
/**
  *_isempty- check if strin nul or empty
  *@s:string
  *Return: Null if empty or s otherwise
  */
char *_isempty(char *s)
{
	int i;

	if (s == NULL || s[0] == '\0')
		return (NULL);
	/*check if string just fulll of empty spaces*/
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && s[i + 1] != '\0')
			return (s);
		i++;
	}
	return (NULL);
}
/**
  *strtow-plits a string into words
  *@str:string
  *Return: 2d array or NULL
  */
char **strtow(char *str)
{
	char **word, *n;
	int i, r, j = 0, k = 0, f;

	n = _isempty(str);

	if (n == NULL)
		return (NULL);
	r = word_count(str) + 1;

	word = malloc(sizeof(char *) * r);
	if (word == NULL)
		return (NULL);

	for (i = 0; i < r; i++)
	{
		while (str[k] == ' ')
			k++;
		j = k;/*store position of ist contact with word*/
		while (str[k] != ' ' && str[k] != '\0')
			k++;
		if (k > j)/*words counted btwn spaces*/
		{
			word[i] = c_strdup(str, j, k);
			if (word[i] == NULL)
			{
				for (f = 0; f < i; f++)
					free(word[f]);
				free(word);
				return (NULL);
			}
		}
		else/*end of string reached*/
		{
			word[i] = NULL;
		}
	}
	return (word);
}
