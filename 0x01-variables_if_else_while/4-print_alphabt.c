#include <stdio.h>
/**
 * main - does stuff
 * Return:  0 for success
 */
int main(void)
{
char str[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
if (str[i] == 'e' || str[i] == 'q')
{
i++;
continue;
}
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}

