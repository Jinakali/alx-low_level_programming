#include <stdlib.h>
#include "dog.h"
/**
 *free_dog- free meem allocated
 *@d:pointer to be frreed
 */
void free_dog(dog_t *d)
{
	free(d);
}
