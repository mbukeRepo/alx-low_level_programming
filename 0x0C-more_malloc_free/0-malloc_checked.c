
#include <stdlib.h>
/**
 * malloc_checked - does stuff
 * @b: size of memory allocated
 * Return: pointer to void
 */
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (!s)
{
free(s);
exit(98);
}
return (s);
}
