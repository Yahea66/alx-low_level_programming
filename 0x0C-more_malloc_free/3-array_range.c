#include <stdlib.h>
#include <stddef.h>

/**
*array_range - creates an array of integers.
*@min: the min integer in the range. 
*@max: the maximum integer in the range. 
*
*Return: pointer to the array of numbers.
*/
int *array_range(int min, int max)
{
int *arr;
unsigned int size;
unsigned int i;
if (min > max)
{
return (NULL) ;
}
size = ((max - min) + 1);
arr = malloc(sizeof(int) * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min + i;
} 
return (arr);
}
