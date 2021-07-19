#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creating new dog
 * @name: name of the new dog
 * @age: age
 * @owner: owner of the dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
new = malloc(sizeof(dog_t));
if (new == NULL)
{
return (NULL);
}
new->name = malloc(sizeof(name));
new->owner = malloc(sizeof(owner));
if (new->owner == NULL || new->name == NULL)
{
return (NULL);
}
new->name = strcpy(new->name, name);
new->age = age;
new->owner = strcpy(new->owner, owner);
return (new);
}
