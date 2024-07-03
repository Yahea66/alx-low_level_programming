#include "main.h"

/**
 * _strncat - concatenates two strings up to n characters.
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to be appended from src
 *
 * Description: This function appends up to n characters from the 
 * source string to the destination string. If the source string
 * has fewer than n characters, the entire source string is appended.
 * The destination string is always null-terminated.
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
