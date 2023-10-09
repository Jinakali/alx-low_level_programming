#ifndef _DOG_H_
#define _DOG_H_
/**
  *struct dog - store dog's details
  *@name:dog's name
  *@age:dog's age
  *@owner:dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typdef struct dog dog_t;
#endif /*dog.h*/
