#include <ctype.h>
/**
 * _isupper - does stuff
 * @c: character
 * Return: 1 for success
 */

int _isupper(int c)
{
int isUpper = isupper(c);
if (isUpper == 0)
{
return (0);
}
else
{
return (1);
}
}
