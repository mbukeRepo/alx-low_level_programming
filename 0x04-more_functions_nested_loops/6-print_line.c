#include "holberton.h"
/**
 * print_line - does stuff
 * @n: length of the line
 */

void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
