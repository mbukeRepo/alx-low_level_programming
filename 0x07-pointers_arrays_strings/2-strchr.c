#include <string.h>
/**
 * _strchr - returns the pointer to first occurence
 * @s: string
 * @c: character to find
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
int i = 0;
int size = strlen(s);
char *found = NULL;
while (i < size)
{
if (s[i] == c)
{
found = s + i;
break;
}
i++;
}
return (found);
}
