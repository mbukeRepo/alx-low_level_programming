#include <string.h>
#include "holberton.h"

/**
 * support - does stuff
 * @s: string
 * @i: integer
 */
void support(char *s, int i)
{
if (i < 0)
{
return;
}
_putchar(s[i]);
i--;
support(s, i);
}

/**
 * _print_rev_recursion - does stuff
 * @s: string
 */
void _print_rev_recursion(char *s)
{
int len = strlen(s);
support(s, len - 1);
}
