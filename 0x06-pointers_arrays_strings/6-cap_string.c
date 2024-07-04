#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string
 *
 * Description: This function takes a string and capitalizes the first
 * letter of each word. Words are separated by spaces, tabulation, new
 * lines, commas, semicolons, periods, exclamation points, question marks,
 * double quotes, parentheses, and curly braces.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;
int cap_next = 1;
char *separators = " \t\n,;.!?\"(){}";
while (str[i])
{
if (cap_next && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
cap_next = 0;
}
else if (strchr(separators, str[i]))
{
cap_next = 1;
}
else
{
cap_next = 0;
}
i++;
}
return str;
}
