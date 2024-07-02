#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: pointer to a string
 * @src: pointer to a string
 *
 * Description: This function takes a pointer to a string
 * and copies it to the destination buffer, including the
 * null terminator.
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, const char *src)
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
return dest;
}
