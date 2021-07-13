#include <stdlib.h>
#include <string.h>
/**
 * _strdup - does stuff
 * @str: string
 * Return:string
 */
char *_strdup(char *str)
{
char *ptr = NULL;
int i = 0;
int len;
if (str == NULL)
{
return (ptr);
}
len = strlen(str);
ptr = malloc((len + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
while (i < len)
{
ptr[i] = str[i];
i++;
}
return (ptr);
}
