/**
 * clear_bit - changes bit at index to 0
 * @n: number
 * @index: index of the bit
 * Return: new number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= ((sizeof(unsigned long int) * 8)))
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
