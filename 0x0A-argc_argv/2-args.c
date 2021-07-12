#include <stdio.h>

/**
 * main - does stuff
 * @argc: int
 * @argv: array of args
 * Return: int
 */
int main(int argc, char **argv)
{
int i;
i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
