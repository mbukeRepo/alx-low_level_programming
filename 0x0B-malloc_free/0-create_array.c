#include <stdlib.h>
/**
 * create_array - does stuff
 * @size: size of array
 * @c: character
 * Return: location of array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ptr = NULL;
if (size != 0)
{
ptr = malloc(size * sizeof(char));
if (NULL == (ptr = malloc(size * sizeof(char))))
{
return (NULL);
}
while (i < size)
{
ptr[i] = c;
i++;
}
}
return (ptr);
}
