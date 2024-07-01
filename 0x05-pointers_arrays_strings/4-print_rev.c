#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout
 * @s: pointer to a string
 *
 * Description: This function takes a pointer to a string
 * character by character to the standard output in reverse, followed by a new line.
 */
void print_rev(char *s)
{
int i = 0;
int j;
while (s[i] != '\0')
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
