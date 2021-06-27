#include <stdio.h>
/**
 * main - does stuff
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
int j, k, l;
while (i <= 9)
{
j = 0;
while (j <= 8)
{
k = ((i * 10) + j) / 10;
while (k <= 9)
{
l = ((i * 10) + j + 1) % 10;
while (l <= 9)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (i == 9 && j == 8 && k == 9 && l == 9)
{
break;
}
putchar(',');
putchar(' ');
l++;
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
