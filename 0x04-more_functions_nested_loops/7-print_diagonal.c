#include "holberton.h"
/**
 * print_diagonal - does stuff
 * @n: length of the line
 */

void print_diagonal(int n)
{
int i = 0;
int j;
if (n > 0)
{
while (i < n)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar(92);
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
