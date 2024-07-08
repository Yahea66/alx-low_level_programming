#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer to a string
 * @c: the character to be located 
 *
 * Description: Returns a pointer to the first occurrence of the character c 
 * or NULL if the character is not found
 *
 * Return: pointer to the first occurrence. 
 */
char *_strchr(char *s, char c)
{
char *ptr = NULL;
while (*s) 
{
if (*s == c) 
{
ptr = (char *)s;
break;
} 
s++;
} 
return (ptr);
}
