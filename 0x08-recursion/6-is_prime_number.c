/**
 * support - for recursive calls
 * @n: number to check
 * @i: checker
 * Return: 1 for prime numbers
 */
int support(int n, int i)
{
if (n == i)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
i++;
return (support(n, i));
}

/**
 * is_prime_number - finding prime number
 * @n: number to check
 * Return: 1 for prime numbers
 */
int is_prime_number(int n)
{
int isPrime;
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
isPrime = support(n, 3);
return (isPrime);
}
