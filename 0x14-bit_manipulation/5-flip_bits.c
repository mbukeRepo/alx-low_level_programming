/**
 * flip_bits - finds the bits to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int bits = 0;
while (xor > 0)
{
bits += (xor & 1);
xor >>= 1;
}
return (bits);
}
