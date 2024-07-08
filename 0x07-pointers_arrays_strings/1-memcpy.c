#include "main.h"

/**
 * _memcpy - copies memory area. byte.
 * @dest: pointer to the destination.
 * @src: pointer to the source. 
 * @n: number of bytes to be copied.
 *
 * Description: The _memcpy() function copies n bytes from memory area, 
 * src to memory area dest. 
 *
 * Return: pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
} 
return (dest);
}
