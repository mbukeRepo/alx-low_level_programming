#include "search_algos.h"

/**
 * linear_search - finds x from array using linear search
 * @array: array of inputs to search from
 * @size: the size of array of inputs
 * @value: the value to search
 * Return: position of value in array
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
int pos = -1;
if (array == NULL)
return (-1);

while (i < size)
{
printf("Value checked array[%li] = [%i]\n", i, array[i]);
if (array[i] == value)
{
pos = i;
break;
}
i++;
}
return (pos);
}
