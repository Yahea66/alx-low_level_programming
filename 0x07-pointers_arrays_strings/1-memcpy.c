#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to the destination memory area.
 * @src: pointer to the source memory area.
 * @n: number of bytes to copy.
 *
 * Description: The _memcpy() function copies n bytes from the memory area
 * pointed to by src to the memory area pointed to by dest.
 *
 * Return: pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
