#include <stdarg.h>
/**
 * sum_them_all - does stuff
 * @n: number of numbers
 * @...: numbers to be printed
 * Return: is separator is null not printed
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
va_list args;
va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
va_end(args);
return (sum);
}
