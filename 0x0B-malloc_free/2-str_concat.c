#include <stdlib.h>
#include <string.h>

/**
 * str_concat - does stuff
 * @s1: string
 * @s2: string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
char *ptr = NULL;
int i = 0;
int len1 = strlen(s1);
int len2 = strlen(s2);
int newlen = len1 + len2 + 1;
ptr = malloc(newlen * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
while (i < newlen)
{
if (i < len1)
{
ptr[i] = s1[i];
}
if (i >= len1 && i < len1 + len2 + 1)
{
ptr[i] = s2[i - len1];
}
i++;
}
ptr[i] = '\0';
return (ptr);
}
