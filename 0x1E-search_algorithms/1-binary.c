#include "search_algos.h"

/**
 * printArray - prints the elements of an array
 * @array: array of elements to print
 * @from: the index to start from
 * @to: the index to end
 */
void printArray(int *array, int from, int to)
{
printf("Searching in array: ");
while (from <= to - 1)
{
printf("%i, ", *(array + from));
from++;
}
printf("%i\n", *(array + from));
}
/**
 * binary - recursive function performing binary search
 * @array: array of elements to search from
 * @left: left most of the range
 * @right: right most of the range
 * @value: value to search for
 * Return: the position of value in array
 */
int binary(int *array, int left, int right, int value)
{
if (right >= left)
{
int mid = left + (right - left) / 2;
printArray(array, left, right);
if (array[mid] == value)
return (mid);
if (array[mid] > value)
return (binary(array, left, mid - 1, value));
return (binary(array, mid + 1, right, value));
}
return (-1);
}


/**
 * binary_search - finds an element in an array using binary search
 * @array: pointer to first element in array
 * @size: size of array
 * @value: the value to search for
 * Return: the index of value in array
 */
int binary_search(int *array, size_t size, int value)
{
int pos = -1;
if (array == NULL)
return (-1);
pos = binary(array, 0, size - 1, value);
return (pos);
}
