#include <stdlib.h>
#include <stdio.h>

/**
 * main - does stuff
 * @argc: int
 * @argv: array of strings
 * Return: int
 */
int main(int argc, char **argv)
{
int cash;
int i = 0;
int num_of_coins = 0;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
cash = atoi(argv[1]);
while (i < 5)
{
if (coins[i] <= cash)
{
num_of_coins += cash / coins[i];
cash %= coins[i];
}
i++;
}
printf("%d\n", num_of_coins);
return (0);
}
