#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalise words in a string
 * @str: string to capitalize
 * Return: string
 */
char *cap_string(char *str)
{
int str_len = strlen(str);
int i = 0;
*str = toupper(*(str + i));
while (i < str_len)
{
if (str[i] == '?' || str[i] == '!' || str[i] == ';')
{
str[i + 1] = toupper(str[i + 1]);
}
if (str[i] == '.' || str[i] == ',' || str[i] == ' ')
{
str[i + 1] = toupper(str[i + 1]);
}
if (str[i] == '\n' || str[i] == '\t' || str[i] == '"')
{
str[i + 1] = toupper(str[i + 1]);
}
if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
str[i + 1] = toupper(str[i + 1]);
}
i++;
}
return (str);
}
