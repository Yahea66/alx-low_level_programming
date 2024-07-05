#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet speak).
 * @str: Pointer to the string to be encoded
 *
 * Description: This function takes a string and replaces certain letters
 * with specific numbers to convert the string into leet speak.
 * - Letters a and A are replaced by 4
 * - Letters e and E are replaced by 3
 * - Letters o and O are replaced by 0
 * - Letters t and T are replaced by 7
 * - Letters l and L are replaced by 1
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
int i, j;
char *letters = "aAeEoOtTlL";
char *replacements = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = replacements[j];
break;
}
}
}
return str;
}
