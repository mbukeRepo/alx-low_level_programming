#include <stdio.h>
/**
 * main - does stuff
 * Return: 0 for successful
 */
int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
if (i % 3 != 0 && i % 5 != 0)
{
printf("%d", i);
}
i++;
printf(" ");
}
printf("\n");
return (0);
}
