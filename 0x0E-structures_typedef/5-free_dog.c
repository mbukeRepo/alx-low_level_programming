#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - freeing the dog_t struct
 * @d: pointer to struct dog_t
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
