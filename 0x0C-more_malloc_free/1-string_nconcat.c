#include <stdlib.h>
#include <string.h>
/**
 * sup - concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters
 * @newlen: length of new string
 * @dest_len: lenght of s1
 * @newstr: new string
 * Return: string
 */
char *sup(char *s1, char *s2, char *newstr, int dest_len, int newlen, int n)
{
int i = 0;
while (i < newlen)
{

if (i < dest_len)
{
newstr[i] = s1[i];
}
if (i >= dest_len && i < newlen)
{
if (n == 0)
{
i++;
break;
}
newstr[i] = s2[i - dest_len];
}
i++;
}
newstr[i] = '\0';
return (newstr);
}


/**
 * string_nconcat - concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int dest_len;
int newlen;
char *newstr;

if (s1 == NULL)
{
dest_len = 0;
}

if (s2 == NULL)
{
n = 0;
}

if (s1 != NULL)
{
dest_len = strlen(s1);
}

if (s2 != NULL && n > strlen(s2))
{
n = strlen(s2);
}


newlen = dest_len + n;
if (dest_len == 0 && n == 0)
{
newlen = 1;
}
newstr = malloc(newlen *sizeof(char));
if (newstr == NULL)
{
return (NULL);
}
return (sup(s1, s2, newstr, dest_len, newlen, n));
}
