#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes characters to upper
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
int str_len = strlen(s);
int i = 0;
while (i < str_len)
{
s[i] = toupper(s[i]);
i++;
}
return (s);
}
