#include<stdlib.h>
#include<stddef.h>

/**
*alloc_grid - makes a 2 dimensional array of integers.
*@width: number of columns
*@height: number of rows
*
*Return: NULL if height or width below 1 or if memory allocation fails,
*otherwise a pointer to the 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
if (width < 1 || height < 1)
{
return (NULL);
}
int **arr = malloc(sizeof(int *) * height);
if (arr == NULL)
{
return (NULL);
}
for (int i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
for (int j = 0; j < i; j++)
{
free(arr[j]);
}
free(arr);
return (NULL);
}
}
for (int i = 0; i < height; i++)
{
for (int j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
