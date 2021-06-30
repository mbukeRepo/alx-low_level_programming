#include <string.h>
/**
 * leet - encrypts a string
 * @str: string to encrypt
 * Return: string
 */
char *leet(char *str)
{
int str_len = strlen(str);
int i = 0;
while (i < str_len)
{
if (str[i] == 'a' || str[i] == 'A')
{
str[i] = '4';
}
if (str[i] == 'e' || str[i] == 'E')
{
str[i] = '3';
}
if (str[i] == 'o' || str[i] == 'O')
{
str[i] = '0';
}
if (str[i] == 't' || str[i] == 'T')
{
str[i] = '7';
}
if (str[i] == 'l' || str[i] == 'L')
{
str[i] = '1';
}
i++;
}
return (str);
}
