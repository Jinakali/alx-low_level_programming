#include <stdlib.h>
#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
