#include <stdlib.h>
/**
 * free_grid - frees memory
 * @grid: array
 * @height: rows
 */

void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
