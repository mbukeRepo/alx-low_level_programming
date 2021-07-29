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
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
