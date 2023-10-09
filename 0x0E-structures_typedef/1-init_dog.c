#include "dog.h"
int _strlen(char *s);
char *_strdup(char *str);
/**
  *init_dog-initialise a variable of type struct dog
  *@d:pointer to variable passed
  *@name:dog's name
  *@age: dog's age
  *@owner:owner"s name
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d->name);
		return;
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		return;
	}

	d->age = age;
}
/**
 * _strlen - string length
 *@s:pointer to the string
 *
 *Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strdup -copy of the string given as a parameter .
 *@str: string
 * Return: duplicated string or NULL;
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * _strlen(str) + 1);

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
