#include <string.h>
/**
 * rev_string - reverses the string
 * @s: address of the first character of the string
 */
void rev_string(char *s)
{
int i = 0;
char copy_of_s[2000];
int len_of_str = strlen(s) - 1;
strcpy(copy_of_s, s);
while (i <= len_of_str)
{
s[len_of_str - i] = copy_of_s[i];
i++;
}
}
