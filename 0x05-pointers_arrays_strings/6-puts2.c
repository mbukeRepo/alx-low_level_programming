#include "holberton.h"
#include <string.h>

/**
 * puts2 - prints even numbers
 * @str: string to print
 */

void puts2(char *str)
{
size_t i = 0;
while (i < strlen(str))
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
