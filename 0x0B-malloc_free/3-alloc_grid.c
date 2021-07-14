#include <stdlib.h>
/**
 * alloc_grid - makes array
 * @width: cols
 * @height: rows
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
int **p = (int **)malloc(height * sizeof(int *));
int i;
int j;
if (width == 0 || height == 0)
{
return (NULL);
}
i = 0;
while (i < height)
{
p[i]= (int *)malloc(sizeof(int) * width);
if (p[i] == NULL)
{
return (NULL);
}
i++;
}
i = 0;
while (i < height)
{
j = 0;
while (j < width)
{
p[i][j] = 0;
j++;
}
i++;
}

return (p);
}
