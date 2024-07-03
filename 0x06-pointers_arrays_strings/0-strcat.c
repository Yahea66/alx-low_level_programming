#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: pointer to a string
 * @src: pointer to a string 
 *
 * Description: This function takes a pointer to a string,
 * prints the second half of the string
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int l = 0;
int i = 0;
while (dest[l] != '\0')
{
l++;
} 
while (src[i] != '\0')
{
dest[l] = src[i];
l++;
i++;
} 
dest[l] = '\0';
return (dest);
} 
