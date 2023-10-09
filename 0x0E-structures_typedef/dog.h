#ifndef _DOG_H_
#define _DOG_H_
#include <stdlib.h>
/**
  *struct dog - store dog's details
  *@name:dog's name
  *@age:dog's age
  *@owner:dog's owner
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif /*dog.h*/
