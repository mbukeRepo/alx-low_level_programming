#include <stdio.h>
/**
 * main - does stuff
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
int j;
while (i < 9)
{
j = i + 1;
while (j <= 9)
{
putchar(i + '0');
putchar(j + '0');
if (i == 8 && j == 9)
{
break;
}
putchar(',');
putchar(' ');
j++;
}
i++;
}
putchar('\n');
return (0);
}
