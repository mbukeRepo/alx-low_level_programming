#include <stdlib.h>
/**
 * int_index - does stuff
 * @array: array
 * @size:: size of the array
 * @cmp: pointer to array
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;
if (array == NULL || cmp == NULL)
{
return (-1);
}
while (index < size)
{
if ((*cmp)(array[index]) != 0)
{
return (index);
}
index++;
}
return (-1);
}
