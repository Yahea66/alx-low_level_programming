#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: Pointer to the string
 *
 * Description: This function takes a string and converts all lowercase
 * letters in the string to uppercase letters.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
}
ptr++;
}

return str;
}
