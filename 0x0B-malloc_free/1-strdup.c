#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to string to be copied
 *
 * Return: NULL or a pointer to the array
 */
char *_strdup(char *str)
{
unsigned int size = 0;
char *arr;
unsigned int n = 0;
unsigned int i; 
while (str[n]) 
{
size++;
n++;
} 
if (str == NULL)
{
return (NULL);
}
arr = malloc(sizeof(char) * (size + 1));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = str[i];
}
arr[size] = '\0';
return (arr);
}
