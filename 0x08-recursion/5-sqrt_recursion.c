/**
 * support - does stuff
 * @n: number
 * @i: number
 * Return: number
 */

int support(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i == n)
{
return (-1);
}
i++;
return (support(n, i));
}
/**
 * _sqrt_recursion - does stuff
 * @n: number
 * Return: number
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (support(n, 1));
}
