#include <stdio.h>
/**
 * main - does stuff
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
int j, k;
while (i <= 9)
{
j = 0;
while (j <= 9)
{
k = (i * 10 + j) +1;
while (k <= 99)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar((k / 10) + '0');
putchar((k % 10) + '0');
if (i == 9 && j == 8)
{
break;
}
putchar(',');
putchar(' ');
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
