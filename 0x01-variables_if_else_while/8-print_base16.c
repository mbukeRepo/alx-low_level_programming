#include <stdio.h>
/**
 * main - does stuff
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
putchar(i + '0');
i++;
}
i = 97;
while (i <= 102)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
