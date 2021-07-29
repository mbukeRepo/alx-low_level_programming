#include <stdio.h>
/**
 * main - does stuff
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
int j, k;
while (i < 8)
{
j = i + 1;
while (j < 9)
{
k = j + 1;
while (k <= 9)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i == 7 && j == 8 && k == 9)
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
