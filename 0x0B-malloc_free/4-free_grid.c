#include <stdlib.h>
#include <stddef.h>

/**
*free_grid - frees a 2 dimensional grid.
*@grid: a 2 dimensional array
*@height: number of rows
*
*Return: Void
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
