#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - does nothing special
 * @argc: number of command line arguments
 * @argv: array of commandline arguments
 * Return: integer
 */

int main(int argc, char **argv)
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
