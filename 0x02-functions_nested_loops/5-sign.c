#include "holberton.h"
/**
 * print_sign - does stuff
 * @n: number
 * Return: returns 1 and 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
