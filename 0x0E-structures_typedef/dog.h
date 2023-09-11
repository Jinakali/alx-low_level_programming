#ifndef DOG_H
#define DOG_H
/**
 *struct dog - contain dog details
 *@name:pointer to string literal
 *@age:age of dog
 *@owner:name of custofian
 *
 *Description: dog details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
