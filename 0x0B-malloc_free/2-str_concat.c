#include <stdlib.h>
#include <string.h>
/**
 * support - helps use code refactoring
 * @ptr: new string
 * @s1: string
 * @s2: string
 * @len1: length of s1
 * @len2: length of s2
 * @newlen: lenght of new string
 * Return: string
 */
char *support(char *ptr, char *s1, char *s2, int len1, int len2, int newlen)
{
int i = 0;
while (i < newlen)
{
if (i < len1)
{
ptr[i] = s1[i];
}
if (i >= len1 && i < newlen)
{
if (len2 == 0)
{
i++;
break;
}
ptr[i] = s2[i - len1];
}
i++;
}
ptr[i] = '\0';
return (ptr);
}
/**
 * str_concat - does stuff
 * @s1: string
 * @s2: string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int len1;
int len2;
int newlen;
if (s1 == NULL && s2 == NULL)
{
len1 = 0;
len2 = 0;
}
if (s1 == NULL && s2 != NULL)
{
len1 = 0;
len2 = strlen(s2);
}
if (s2 == NULL && s1 != NULL)
{
len1 = strlen(s1);
len2 = 0;
}
if (s1 != NULL && s2 != NULL)
{
len1 = strlen(s1);
len2 = strlen(s2);
}
newlen = len1 + len2 + 1;
ptr = malloc(newlen *sizeof(char));

if (ptr == NULL)
{
return (NULL);
}

return (support(ptr, s1, s2, len1, len2, newlen));
}
