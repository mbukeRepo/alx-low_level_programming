/**
 * set_bit - sets the bit at index to 1
 * @n:  number
 * @index: index of the bit
 * Return: new number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n ^= (1 << index);
return (1);
}
