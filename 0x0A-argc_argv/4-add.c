#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - does stuff
 * @argc: int
 * @argv: array of args
 * Return: int
 */
int main(int argc, char **argv)
{
int sum = 0;
int i = 1;
char *p;
if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
if (argc < 3)
{
printf("Error\n");
return (1);
}
while (i < argc)
{
strtol(argv[i], &p, 10);
sum += atoi(argv[i]);
if (*p)
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);
return (0);
}

