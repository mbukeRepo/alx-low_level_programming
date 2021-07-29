#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of strings
 * @...: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list words;
unsigned int i = 0;
char *str;
va_start(words, n);
while (i < n)
{
str = va_arg(words, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(words);
}
