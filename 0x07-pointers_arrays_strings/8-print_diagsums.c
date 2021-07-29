#include <stdio.h>

/**
 * print_diagsums - does stuff
 * @a: array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sumOfPD = 0;
int sumOfMD = 0;
i = 0;
while (i < size)
{
j = 0;
while (j < size)
{
if (i == j)
{
sumOfPD += *(a + (i *size) + j);
}
if ((i + j) == (size - 1))
{
sumOfMD += *(a + (i *size) + j);
}
j++;
}
i++;
}
printf("%d, %d\n", sumOfPD, sumOfMD);
}
