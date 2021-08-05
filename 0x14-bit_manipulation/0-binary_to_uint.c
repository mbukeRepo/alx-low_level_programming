#include <stdlib.h>
/**
 * binary_to_uint - changes binary to decimal
 * @b: string containing binary number
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
int len;
int num = 0, mult = 1;

if (*b == '\0')
{
return (0);
}
for (len = 0; b[len];)
len++;
len -= 1;
while (len >= 0)
{
if (b[len] != '0' &&  b[len] != '1')
{
return (0);
}
num += (b[len] - '0') * mult;
mult *= 2;
len--;
}
return (num);
}
