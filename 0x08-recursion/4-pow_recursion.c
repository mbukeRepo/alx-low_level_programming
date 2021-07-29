/**
 * _pow_recursion - finds the number power number
 * @x: number
 * @y: number
 * Return: number
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
