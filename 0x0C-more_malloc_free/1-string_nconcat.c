#include <stdlib.h>
#include <stddef.h>

/**
*string_nconcat - concatenates two strings.
*@s1: pointer to the first string 
*@s2: pointer to the second string 
*
*Return: pointer to the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *arr;
unsigned int size_s1 = sizeof(s1);
unsigned int size_s2 = sizeof(s2);
unsigned int size;
unsigned int i = 0;
unsigned int j = 0;
if (s1 == NULL && s2 == NULL) 
{
return (NULL);
} 
if (s1 == NULL) 
{
s1 = "";
} 
if (s2 == NULL) 
{
s2 = "";
} 
if (n <= size_s2)
{
size = size_s1 + n;
} 
else
{
size = size_s1 + (size_s2 - 1);
} 
arr = malloc(size);
if (arr == NULL)
{
return (NULL);
} 
arr = realloc(arr, size);
if (arr == NULL) 
{
return (NULL);
} 
for (i = 0; i < size_s1; i++) 
{
arr[i] = s1[i];
} 
for (j = 0; j < size - size_s1; j++) 
{
arr[i + j] = s2[j];
} 
arr[size] = '\0';
return (arr);
} 
