/**
 * _memset - sets the array  s
 * @s: array
 * @b: what to set it to
 * @n: number of elements to set
 * Return: array of characters
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
