#include <stdlib.h>
/**
 * array_iterator - does stuff
 * @array: array to perform actions on
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL || action == NULL)
{
return;
}
while (i < size)
{
(*action)(array[i]);
i++;
}
}
