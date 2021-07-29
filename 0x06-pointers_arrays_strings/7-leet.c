#include <string.h>
/**
 * leet - encrypts a string
 * @str: string to encrypt
 * Return: string
 */
char *leet(char *str)
{
char char_to_encode[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char keys[] = {'4', '3', '0', '7', '1'};
int str_len = strlen(str);
int i;
int j;
for (i = 0; i < str_len; i++)
{
for (j = 0; j < 10; j = j + 2)
{
if (str[i] == char_to_encode[j] || str[i] == char_to_encode[j + 1])
{
str[i] = keys[j / 2];
}
}
}
return (str);
}
