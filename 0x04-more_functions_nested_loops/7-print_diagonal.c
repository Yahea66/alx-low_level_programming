#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed
 *
 * Description: This function prints a diagonal line using the character '\'.
 * Each line of the diagonal is preceded by spaces. If n is 0 or less,
 * the function only prints a newline character.
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(32); /* ASCII code for space */
}
_putchar(92); /* ASCII code for backslash */
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
