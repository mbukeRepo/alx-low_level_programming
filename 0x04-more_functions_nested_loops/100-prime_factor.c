#include <stdio.h>
/**
 * main - does stuff
 * Return: 0 for success
 */
int main(void)
{
long int num = 612852475143;
int i = 2;
while (num >= i * i)
{
if (num % i == 0)
{
num = num / i;
}
else
{
i++;
}
}
printf("%ld\n", num);
return (0);
}
