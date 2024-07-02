#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string 
 * @dest: pointer to a string
 * @src: pointer to a string 
 *
 * Description: This function takes a pointer to a string,
 * prints the second half of the string
 */
char *_strcpy(char *dest, char *src) 
{
int length = 0;
int i;
while (src[length] != '\0')
{
length++;
}
for (i = 0; i < length + 1; i++)
{
dest[i] = src[i];
}
return (dest);
}
