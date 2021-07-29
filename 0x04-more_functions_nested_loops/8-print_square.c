#include "holberton.h"
/**
 * print_square - does stuff
 * @size: length of the line
 */

void print_square(int size)
{
int i = 0;
int j;
if (size > 0)
{
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
