#include <stdio.h>

/**
 * main - this is good
 * Return: 0 for the successful 
 */
int main(void)
{
char str[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;
while (i<52)
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}
