#include <stdlib.h>
#include <string.h>
/**
 * _calloc - implements calloc
 * @nmemb: members of the array
 * @size: size of each member
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *newArray;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
newArray = malloc(nmemb * size);
if (newArray == NULL)
{
exit(98);
return (NULL);
}
newArray = memset(newArray, 0, nmemb);
return (newArray);
}
