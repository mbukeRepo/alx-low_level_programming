#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - does stuff
 * @n: number
 * Return: number
 */
int print_last_digit(int n)
{
int lastDigit =  abs(n) % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
