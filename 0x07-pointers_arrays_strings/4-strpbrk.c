#include <string.h>
#include <stdio.h>
/**
 * _strpbrk - does stuff
 * @s: string
 * @accept: string
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
int size1 = strlen(s);
int size2 = strlen(accept);
char *found = NULL;
int i = 0;
int j;
while (i < size1)
{
j = 0;
while (j < size2)
{
if (accept[j] == s[i])
{
found = s + i;
break;
}
j++;
}
if (found != NULL)
{
break;
}
i++;
}
return (found);
}
