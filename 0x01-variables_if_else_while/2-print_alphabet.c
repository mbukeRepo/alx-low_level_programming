#include <stdio.h>

/**
 * main - this is real
 * Return: 0 for successful exit 
 */
int main(void)
{
char str[27] = "abcdefghijklmnopqrstuvwxyz";
int i =0;
while (i<27)
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}
