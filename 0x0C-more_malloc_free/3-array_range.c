#include <stdlib.h>
/**
 * array_range - does stuff
 * @min: min
 * @max: max
 * Return: array
 */
int *array_range(int min, int max)
{
int size;
int *arr;
int i;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = (int *)malloc(size *sizeof(int));

if (arr == NULL)
{
return (NULL);
}

i = 0;
while (i < size)
{
arr[i] = min + i;
i++;
}
return (arr);
}
