#include <string.h>

/**
 * _strncat - concats n bytes to a string
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of bytes
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
size_t dest_len = strlen(dest);
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
