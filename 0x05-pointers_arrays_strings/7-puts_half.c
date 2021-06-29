#include "holberton.h"
#include <string.h>
/**
 * puts_half - does stuff
 * @str: string
 */
void puts_half(char *str)
{
int len = strlen(str);
int start = len / 2;
if (len % 2 != 0)
{
start = (len + 1) / 2;
}
while (start < len)
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
