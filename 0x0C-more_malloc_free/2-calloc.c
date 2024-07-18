#include <stdlib.h>
#include <stddef.h>

/**
*_calloc - allocates memory for an array, using malloc.
*@nmemb: elements in the array. 
*@size: number of elements. 
*
*Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned char *arr;
unsigned int total_size;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL) ;
}
total_size = nmemb * size;
arr = (unsigned char *) malloc(total_size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < total_size; i++)
{
arr[i] = 0;
} 
return ((void *) arr);
}
