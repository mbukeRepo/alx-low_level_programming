#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int len = 0;

while (*str++)
{
len++;
}

return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (index = 0; src[index]; index++)
{
dest[index] = src[index];
}

dest[index] = '\0';

return (dest);
}
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
new->name = malloc(sizeof(char) * (_strlen(name) + 1));
new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (new->owner == NULL || new->name == NULL)
{
return (NULL);
}
new->name = _strcopy(new->name, name);
new->age = age;
new->owner = _strcopy(new->owner, owner);
return (new);
}
