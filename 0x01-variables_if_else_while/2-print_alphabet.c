#include <stdio.h>

/**
 * main - this is real
 * Return: 0 for successful exit 
 */
int main(void)
{
char str[5] = "abcdefghijklmnopqrstuvwxyz";
int i =0;
while (i<5)
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}
