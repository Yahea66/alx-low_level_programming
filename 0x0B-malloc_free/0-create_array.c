#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars
 * @size: number of chars in the array
 * @c: the char to Initialize the array 
 *
 * Return: NULL or a pointer to an array 
 */
char *create_array(unsigned int size, char c)
{
char *arr = malloc(sizeof(unsigned int) * size); 
unsigned int i;
if (size == 0)
{
return (NULL);
} 
for (i = 0; i < size; i++) 
{
arr[i] = c;
} 
return (arr);
} 
