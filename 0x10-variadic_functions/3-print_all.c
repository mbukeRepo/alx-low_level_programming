#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_int - printer
 * @args: arguments
 */
void print_int(va_list args)
{
int num;
num = va_arg(args, int);
printf("%d", num);
}
/**
 * print_float - printer
 * @args: arguments
 */
void print_float(va_list args)
{
float num;
num = va_arg(args, double);
printf("%f", num);
}
/**
 * print_char - printer
 * @args: arguments
 */
void print_char(va_list args)
{
char letter;
letter = va_arg(args, int);
printf("%c", letter);
}
/**
 * print_string - printer
 * @args: arguments
 */
void print_string(va_list args)
{
char *s;
s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);
}
/**
 * print_all - printing all types
 * @format: format specifier
 * @...: arguments
 *  Description: does stuff
 */

void print_all(const char * const format, ...)
{
int i = 0;
int j;
char *separator = "";
va_list args;
print_t print_args[] = {
{'c', &print_char},
{'s', &print_string},
{'i', &print_int},
{'f', &print_float}
};

va_start(args, format);

while (format && (*(format + i)))
{
j = 0;
while (j < 4 && *(format + i) != print_args[j].type)
{
j++;
}
if (j < 4)
{
if (format[i] == print_args[j].type)
{
printf("%s", separator);
print_args[j].print_type(args);
separator = ", ";
}
}
i++;
}
printf("\n");
va_end(args);
}
