#include <stdlib.h>
#include <string.h>
/**
 * support - support function
 * @newstr: new string
 * @av: array of args
 * @ac: number of args
 * Return: string
 */
char *support(char *newstr, char **av, int ac)
{
int i = 0;
int k = 0;
int j;
int len;
while (i < ac)
{
j = 0;
len =  strlen(av[i]);
while (j <= len)
{
if (av[i][j] == '\0')
{
newstr[k] = '\n';
k++;
break;
}
newstr[k] = av[i][j];
j++;
k++;
}
i++;
}
return (newstr);
}
/**
 * argstostr - args to string
 * @ac: num of args
 * @av: array of args
 * Return: string
 */
char *argstostr(int ac, char **av)
{
char *newstr = NULL;
int newlen = 0;
int i;
if (ac == 0 || av == NULL)
{
return (NULL);
}
i = 0;
while (i < ac)
{
newlen += strlen(av[i]) + 1;
i++;
}
newstr = (char *)malloc(newlen *sizeof(char));
if (newstr == NULL)
{
free(newstr);
return (NULL);
}
return (support(newstr, av, ac));
}
