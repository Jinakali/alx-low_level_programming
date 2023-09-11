#include <stdlib.h>
#include "dog.h"
/**
 *init_dog-initialise a structure after dynamically allocating memory to it
 *@d:pointer of struct dog
 *@name: dog name
 *@age: dog afge
 *@owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
