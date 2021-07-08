/**
 * support - does stuff
 * @s: string
 * @i: integer
 * Return: string length
 */
int support(char *s, int i)
{
if (s[i] == '\0')
{
return (i);
}
i++;
return (support(s, i));
}

/**
 * _strlen_recursion - does stuff
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
return (support(s, 0));
}
