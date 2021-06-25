#include "holberton.h"
/**
 * print_triangle - does stuff
 * @size: length of the line
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j >= (size - 1 - i))
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
