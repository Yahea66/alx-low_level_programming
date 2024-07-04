#include "main.h"

/**
 * _strncpy - copies two strings up to n characters.
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to be copied from src
 *
 * Description: This function copies up to n characters from the 
 * source string to the destination string. If the source string
 * has fewer than n characters, the entire source string is appended.
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n)
{
if (src[i] != '\0')
{
dest[i] = src[i];
} 
else
{
dest[i] = '\0';
}
i++;
}
return (dest);
}
