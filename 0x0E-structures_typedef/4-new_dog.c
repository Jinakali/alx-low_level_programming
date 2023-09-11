#include <stdlib.h>
#include "dog.h"
/**
*_strdup-  returns pointer to new space in memory, which contains a string copy
*@str:string to be duplicated
*
*Return: pointer to char
*/
char *_strdup(char *str)
{
	unsigned int i, l, j;
	char *str_dup;

	if (str == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
	{
		j++;
	}
	str_dup = malloc(sizeof(char) * j + 1);
	if (str_dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		str_dup[i] = str[i];
	}
	str_dup[i] = '\0';
	return (str_dup);
}
/**
  *new_dog- malloc to store char pointer and assign struct members value
 *@name: dog name
 *@age: dog age
 *@owner:dog owner
 *
 *Return: pointer to address of record
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}
