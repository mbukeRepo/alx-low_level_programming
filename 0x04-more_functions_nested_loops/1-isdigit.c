#include <ctype.h>
/**
 * _isdigit - does stuff
 * @c: character
 * Return: 1 for success
 */
int _isdigit(int c)
{
int isDigit = isdigit(c);
if (isDigit == 0)
{
return (0);
}
else
{
return (1);
}
}
