#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - does stuff
 * @n: number
 * Return: number
 */
int print_last_digit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
lastDigit *= -1;
_putchar(lastDigit + '0');
return (lastDigit);
}
