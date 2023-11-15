#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */
int **alloc_grid(int width, int height)
{
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (int i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (int j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (int j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
