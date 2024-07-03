#include "main.h"

/**
 * *_strcat - concatenates two strings(n). 
 * @dest: pointer to a string
 * @src: pointer to a string 
 * @n: intger
 *
 * Description: This function takes a pointer to a string,
 * prints the second half of the string
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int l = 0;
int i = 0;
while (dest[l] != '\0')
{
l++;
} 
while (i < n && src[i] != '\0')
{
dest[l] = src[i];
l++;
i++;
} 
dest[l] = '\0';
return (dest);
} 

