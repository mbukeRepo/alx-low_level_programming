#include <string.h>
/**
 * wildcmp - does stuff
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 != '\0' && *s2 != '\0')
{
if (*s1 == *s2)
{
if (*(s1 + 1) == '\0' && *(s2 + 1) == '\0')
{
return (1);
}
return (wildcmp(s1 + 1, s2 + 1));
}

if (*s2 == '*')
{
if (*(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}
if (*(s2 + 1) == '\0' || *(s1 + 1) == '\0')
{
return (1);
}
if (*s1 == *(s2 + 1))
{
if (strlen(s1) > strlen(s2))
{
return (wildcmp(s1 + strlen(s1) - (strlen(s2) + 1), s2));
}
return (wildcmp(s1 + 1, s2 + 2));
}
return (wildcmp(s1 + 1, s2));
}
}
return (0);
}
