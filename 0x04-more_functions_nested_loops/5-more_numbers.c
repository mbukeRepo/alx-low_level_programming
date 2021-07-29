#include "holberton.h"
/**
 * print - does stuff
 * @n: number
 */
void print(int n)
{
if (n / 10)
{
print(n / 10);
}
_putchar(n % 10 + '0');
}
/**
 * more_numbers - does stuff
 */
void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
j = 0;
while (j <= 14)
{
print(j);
j++;
}
_putchar('\n');
i++;
}
}
