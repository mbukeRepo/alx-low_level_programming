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
newArray = calloc(nmemb, size);
return (newArray);
}
