#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: pointer to first element of the array
 * @n: number of element to print
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i == n - 1)
{
printf("%d", a[i]);
break;
}
printf("%d, ", a[i]);
i++;
}
printf("\n");
}
