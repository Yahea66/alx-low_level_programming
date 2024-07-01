#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 *
 * Description: This function takes a pointer to a string,
 * prints the second half of the string. If the number of
 * characters is odd, it prints the last n characters of the
 * string, where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
int length = 0;
int i, n;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length - 1) / 2 + 1;
}
for (i = n; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
