#include "holberton.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
int i = strlen(s) - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
