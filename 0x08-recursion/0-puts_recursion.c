#include <string.h>
#include "holberton.h"
/**
 * support - does stuff
 * @s: string
 * @i: integer
 */
void support(char *s, int i)
{
if (s[i] == '\0')
{
_putchar('\n');
return;
}
_putchar(s[i]);
i++;
support(s, i);
}

/**
 * _puts_recursion - does stuff
 * @s: string
 */
void _puts_recursion(char *s)
{
support(s, 0);
}

