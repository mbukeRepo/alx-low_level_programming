/**
 * _memcpy - does stuff
 * @dest: where to copy
 * @src: where to copy from
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = src[i];
i++;
}
return (dest);
}
