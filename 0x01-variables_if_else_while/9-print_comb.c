#include <stdio.h>
/**
 * main - this is it
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
if (i == 0)
{
putchar(i + '0');
}
else
{
putchar(',');
putchar(' ');
putchar(i + '0');
}
i++;
}
putchar('\n');
return (0);
}
