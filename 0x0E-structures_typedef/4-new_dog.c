#include "dog.h"
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
 * _strcpy - Copy the string pointed to by src to dest
 * @dest: Pointer to the buffer.
 * @src: Pointer to the string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 *new_dog- creates a new struct dog
 *@name:dog name
 *@age:dog age
 *@owner:dog owner
 *Return: null or new pointer to dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int n_len = _strlen(name), o_len = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * n_len + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(sizeof(char) * o_len + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	 _strcpy(d->owner, owner);
	return (d);
}
