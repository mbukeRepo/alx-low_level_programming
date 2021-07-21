/**
 * int_index - does stuff
 * @array: array
 * @size:: size of the array
 * @cmp: pointer to array
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int index = -1;
if (size <= 0)
{
return (-1);
}
while (i < size)
{
if ((*cmp)(array[i]) != 0)
{
index = i;
break;
}
i++;
}
return (index);
}
