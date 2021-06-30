/**
 * reverse_array - reverse array of integers
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
int copy[1000000];
int i = 0;
int j;
for (j = 0; j < n; j++)
{
copy[j] = a[j];
}
while (i < n)
{
a[i] = copy[n - (i + 1)];
i++;
}
}
