#include <string.h>
/**
 * support - helps in finding the palindrome
 * @s: string
 * @len: length of the string
 * @i: initial index
 * Return: integer
 */
int support(char *s, int len, int i)
{


if (s[i] == '\0')
{
return (1);
}

if (s[i] == s[len - (i + 1)])
{
i++;
return (support(s, len, i));
}
return (0);
}

/**
 * is_palindrome - does stuff
 * @s: string
 * Return: integer
 */
int is_palindrome(char *s)
{
int len = strlen(s);
return (support(s, len, 0));
}
